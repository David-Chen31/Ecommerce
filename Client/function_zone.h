#ifndef FUNCTION_ZONE_H
#define FUNCTION_ZONE_H

#include <QWidget>

class FunctionZone : public QWidget
{
    Q_OBJECT

public:
    FunctionZone(QWidget* parent = nullptr);
    ~FunctionZone();

    virtual void Refresh();
};

#endif // FUNCTION_ZONE_H
