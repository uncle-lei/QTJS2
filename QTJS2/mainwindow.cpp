#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "frminput.h"
#include <QtWidgets>
#include <QPushButton>
#include <QtQuickWidgets/QQuickWidget>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    frmInput *f = new frmInput(ui->centralWidget);

    f->Init("blue", 10, 10);
    //f->setStyleSheet("background-color:green");
    f->setGeometry(200, 50, f->width(), f->height());
    f->bindWidget(ui->lineEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    m_jsengine.globalObject().setProperty("ans0",ui->lineEdit->text().toInt());
    m_jsengine.globalObject().setProperty("ans1",ui->lineEdit_2->text().toInt());
    m_jsengine.globalObject().setProperty("ans2",ui->lineEdit_3->text().toInt());
    m_jsengine.evaluate(ui->textEdit->toPlainText());
    ui->lineEdit->setText(m_jsengine.evaluate("ans0").toString());
    ui->lineEdit_2->setText(m_jsengine.evaluate("ans1").toString());
    ui->lineEdit_3->setText(m_jsengine.evaluate("ans2").toString());
   // ui->lineEdit->setText(m_jsengine.evaluate(ui->textEdit->toPlainText()).toString());
   // ui->lineEdit->setEnabled(ui->pushButton->isEnabled());
    //ui->lineEdit_2->setText(m_jsengine.evaluate(ui->textEdit->toPlainText()).;

}
