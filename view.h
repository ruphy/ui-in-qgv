
#include <QGraphicsView>
#include <QGraphicsScene>

class QSize;

class View : public QGraphicsView
{
	public:
		View(QGraphicsScene *scene) : QGraphicsView(scene) { };
	signals:
		void resized(QSize);

	protected:
		virtual void resizeEvent(QResizeEvent *event);

}

