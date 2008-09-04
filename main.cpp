 
 
 #include <QtGui>

// #include "view.h"
 #include <ui_widj.h>
 #include <view.h>

 int main(int argc, char **argv)
 {
    QApplication app(argc, argv);
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));

    QGraphicsScene scene;
    scene.setSceneRect(-300, -300, 600, 600);
    scene.setItemIndexMethod(QGraphicsScene::NoIndex);
    
    QWidget w;
    Item p;
    p.setWidget(&w);
    Ui::MainWidget ui;
    ui.setupUi(&w);
    
    scene.addItem(&p);

    View view(&scene);
    view.setRenderHint(QPainter::Antialiasing);
    view.setCacheMode(QGraphicsView::CacheBackground);
    view.setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    view.setDragMode(QGraphicsView::ScrollHandDrag);
    view.setWindowTitle(QT_TRANSLATE_NOOP(QGraphicsView, "Ui file"));
    view.resize(400, 300);
    view.show();

    QObject::connect(&view, SIGNAL(resized(QSize)), &p, SLOT(resizee(QSize)));

    return app.exec();
 }
