#ifndef HOMEWINDOW_H
#define HOMEWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class HomeWindow; }
QT_END_NAMESPACE

class HomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    HomeWindow(QWidget *parent = nullptr);
    ~HomeWindow();

private slots:
    void on_wordSearch_textEdited(const QString &arg1);

    void on_wordSearch_editingFinished();

    void on_actionThem_triggered();

    void on_actionLanguage_triggered();

    void on_actionAbout_triggered();

    void on_actionFont_install_triggered();

    void on_actionExit_triggered();

    void on_pastBtn_clicked();

    void on_searchBtn_clicked();

    void on_clearBtn_clicked();

    void on_tableSuggestion_clicked(const QModelIndex &index);

private:
    Ui::HomeWindow *ui;
};
#endif // HOMEWINDOW_H
