#ifndef CONTENT_WIDGET_H
#define CONTENT_WIDGET_H

#include <QWidget>

class ContentWidget : public QWidget
{
    Q_OBJECT

public:
    ContentWidget(QWidget* parent = nullptr);
    ~ContentWidget();

    virtual void Refresh();
};

#endif // CONTENT_WIDGET_H
