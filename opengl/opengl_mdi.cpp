#include <iostream>

#include <QApplication>
#include <QMenuBar>
#include <QMainWindow>
#include <QMdiArea>
#include <QGLWidget>
#include <QMdiSubWindow>

class PlainGLWidget : public QGLWidget
{
protected:
    virtual void paintGL();
};

void PlainGLWidget::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}


int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    QMainWindow *window = new QMainWindow;
    
    QMdiArea *mdi = new QMdiArea;
    window->setCentralWidget(mdi);

    PlainGLWidget *viewer = new PlainGLWidget;
    viewer->resize(600,600);
    
    QMdiSubWindow *sub = new QMdiSubWindow;
    sub->setWidget(viewer);
    mdi->addSubWindow(sub);
    sub->resize(600,600);
    
    window->show();
    window->raise();

    return app.exec();

}