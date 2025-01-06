#ifndef CREATENOTIFICATION_H
#define CREATENOTIFICATION_H

#include <QWidget>
#include <QLabel>
#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QGraphicsOpacityEffect>

class CreateNotification : public QWidget
{
    Q_OBJECT
public:
    explicit CreateNotification(const QString &message, QWidget *parent = nullptr);
    ~CreateNotification();

    void showNotification(int duration = 1000); // 显示通知，默认持续 3 秒

private:
    QLabel *messageLabel;                        // 显示通知信息的标签
    QGraphicsOpacityEffect *opacityEffect;       // 透明度效果
    QPropertyAnimation *fadeInAnimation;         // 淡入动画
    QPropertyAnimation *fadeOutAnimation;        // 淡出动画
    QPropertyAnimation *positionAnimation;       // 位置动画（如果需要）
    QSequentialAnimationGroup *animationGroup;   // 动画组
};

#endif // CREATENOTIFICATION_H
