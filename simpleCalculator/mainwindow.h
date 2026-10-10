#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
class QDoubleSpinBox;
class QLCDNumber;
class QPushButton;
class QButtonGroup;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QDoubleSpinBox *numA;
    QDoubleSpinBox *numB;
    QLCDNumber *lcd;
    QPushButton *addBtn, *subBtn, *divBtn, *mulBtn, *clearBtn;
    QButtonGroup *opGroup;

private slots:
    void clearBtnClicked();
    void operatorClicked(int id);

};
#endif // MAINWINDOW_H
