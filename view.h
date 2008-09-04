
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsProxyWidget>

class QSize;

class View : public QGraphicsView
{
Q_OBJECT
	public:
		View(QGraphicsScene *scene) : QGraphicsView(scene) { };
	signals:
		void resized(QSize);

	protected:
		virtual void resizeEvent(QResizeEvent *event);

};


class Item : public QGraphicsProxyWidget
{
    Q_OBJECT
    public Q_SLOTS:
        void resizee(QSize size) { resize(size); }
};
