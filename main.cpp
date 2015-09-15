#include <QApplication>
#include <QMenuBar>

#include "main.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    mainWindow *window = new mainWindow;

    QMenuBar *menubar = window -> menuBar();
    menubar->addMenu("&File");

    window->show();
    return app.exec();
}

mainWindow::mainWindow(QMainWindow *parent)
{




}
