

#include "view.h"
#include <QResizeEvent>

void View::resizeEvent(QResizeEvent *event)
{
	emit resized(event->size());
}



