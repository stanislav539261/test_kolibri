#include <QDir>
#include <QFileDialog>
#include <QMessageBox>
#include <QTimer>

#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(doMagic()));
    connect(timer, SIGNAL(timeout()), timer, SLOT(stop()));
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_clicked() {
    const auto sec = ui->spinBox->value();

    if (sec > 0) {
        timer->start(ui->spinBox->value() * 1000);
    } else {
        doMagic();
    }
}

void MainWindow::on_radioButton_clicked() {
    ui->overwriteRadioButton->setChecked(true);
    ui->modRadioButton_2->setChecked(false);
}


void MainWindow::on_radioButton_2_clicked() {
    ui->overwriteRadioButton->setChecked(false);
    ui->modRadioButton_2->setChecked(true);
}

void MainWindow::doMagic() {
    const auto openPaths = QFileDialog::getOpenFileNames(
        this,
        tr("Open file"),
        QDir::homePath(),
        "TXT (*.txt);; testFile.bin (testFile.bin)"
    );

    if (openPaths.isEmpty()) {
        return;
    }

    const auto savePath = QFileDialog::getExistingDirectory(this, tr("Save files"), QDir::homePath());

    if (savePath.isNull() || savePath.isEmpty()) {
        return;
    }

    for (const auto &filePath : openPaths) {
        auto file = QFile(filePath);
        auto num = (quint64)(0);

        if (!file.isOpen() && file.open(QIODevice::ReadWrite)) {
            auto stream = QDataStream(&file);

            stream >> num;

            num ^= ui->textEdit->toPlainText().toULongLong();

            if (ui->overwriteRadioButton->isChecked()) {
                stream.device()->reset();
                stream << num;
            } else if (ui->modRadioButton_2->isChecked()) {
                auto count = (size_t)(0);
                auto file = (QFile *)(nullptr);

                while (true) {
                    const auto fileInfo = QFileInfo(filePath);
                    const auto newFilePath = QFileInfo(filePath).absolutePath()
                                             + QDir::separator()
                                             + QFileInfo(filePath).baseName()
                                             + QString("_")
                                             + QString::number(count)
                                             + QString(".")
                                             + QFileInfo(filePath).suffix();

                    auto newFile = new QFile(newFilePath);

                    if (!newFile->exists()) {
                        file = newFile;
                        break;
                    }

                    count++;
                }

                if (file->open(QIODevice::ReadWrite)) {
                    auto stream = QDataStream(file);

                    stream << num;

                    file->close();
                }
            }

            file.close();

            if (!ui->overwriteRadioButton->isChecked() && ui->removeCheckBox->isChecked()) {
                file.remove();
            }
        }
    }
}
