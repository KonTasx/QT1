#include <QJsonObject>
#include <QJsonDocument>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QJsonObject json;

    json["Line1"] = ui->lineEdit1->text();
    json["Line2"] = ui->lineEdit2->text();
    json["Line3"] = ui->lineEdit3->text();
    json["Line4"] = ui->lineEdit4->text();
    json["Line5"] = ui->lineEdit5->text();

    QJsonDocument doc(json);

    QString jsonText =
        doc.toJson(QJsonDocument::Indented);

    ui->textEdit->setPlainText(jsonText);
}
