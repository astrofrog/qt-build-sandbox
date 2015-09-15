#include <QApplication>
#include <QMenuBar>
#include <QMainWindow>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  QMainWindow *window = new QMainWindow;

  QMenuBar *menubar = window->menuBar();
  menubar->addMenu("&File");

  window->show();
  return app.exec();
}