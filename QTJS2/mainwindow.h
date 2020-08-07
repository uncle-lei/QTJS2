#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QtWidgets>
#include <QMainWindow>
#include <QJSEngine>

QT_BEGIN_NAMESPACE
class QlineEdit;
QT_END_NAMESPACE

namespace Ui {
class MainWindow;

}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;
    QJSEngine m_jsengine;


};

#endif // MAINWINDOW_H
