#include "create_notification.h"
#include <QVBoxLayout>
#include <QApplication>
#include <QDesktopWidget>
#include <QGraphicsOpacityEffect>

CreateNotification::CreateNotification(const QString &message, QWidget *parent)
    : QWidget(parent)
{
    // 设置窗口无边框和透明背景
    this->setWindowFlags(Qt::FramelessWindowHint | Qt::WindowStaysOnTopHint);
    this->setAttribute(Qt::WA_TranslucentBackground);

    // 设置弹窗大小
    this->setFixedSize(400, 150);  // 宽 400px，高 150px

    // 创建消息标签
    messageLabel = new QLabel(message, this);
    messageLabel->setAlignment(Qt::AlignCenter);
    messageLabel->setStyleSheet(
        "background-color: rgba(255, 165, 0, 220);" // 橙色背景，透明度稍高
        "color: white;"                             // 白色文字
        "font-size: 20px;"                          // 字体大小
        "font-weight: bold;"                        // 加粗
        "padding: 10px;"                            // 内边距
        "border-radius: 10px;"                      // 圆角
        );

    // 设置透明度效果
    QGraphicsOpacityEffect *opacityEffect = new QGraphicsOpacityEffect(this);
    this->setGraphicsEffect(opacityEffect);
    this->opacityEffect = opacityEffect;

    // 布局设置
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(messageLabel);
    layout->setContentsMargins(10, 10, 10, 10);
    this->setLayout(layout);

    // 初始化透明度动画
    fadeInAnimation = new QPropertyAnimation(opacityEffect, "opacity");
    fadeOutAnimation = new QPropertyAnimation(opacityEffect, "opacity");

    // 初始化位置动画
    positionAnimation = new QPropertyAnimation(this, "geometry");

    animationGroup = new QSequentialAnimationGroup(this);
}

CreateNotification::~CreateNotification()
{
    delete fadeInAnimation;
    delete fadeOutAnimation;
    delete positionAnimation;
    delete animationGroup;
}

void CreateNotification::showNotification(int duration)
{
    QWidget *parent = parentWidget();
    QRect startRect, endRect;

    if (parent) {
        // 父窗口的中间偏上位置
        endRect = QRect(parent->width() / 2 - this->width() / 2,
                        parent->height() / 3 - this->height() / 2,
                        this->width(), this->height());
    } else {
        // 屏幕的中间偏上位置
        QRect screenRect = QApplication::desktop()->screenGeometry();
        endRect = QRect(screenRect.width() / 2 - this->width() / 2,
                        screenRect.height() / 3 - this->height() / 2,
                        this->width(), this->height());
    }

    // 弹窗透明度淡入动画
    fadeInAnimation->setDuration(500);
    fadeInAnimation->setStartValue(0.0);  // 起始透明度为 0
    fadeInAnimation->setEndValue(1.0);    // 最终透明度为 1
    fadeInAnimation->setEasingCurve(QEasingCurve::OutCubic);

    // 弹窗位置固定，不需要移动动画（中间偏上）
    this->setGeometry(endRect);

    // 停留一段时间后，执行淡出动画
    fadeOutAnimation->setDuration(500);
    fadeOutAnimation->setStartValue(1.0); // 起始透明度为 1
    fadeOutAnimation->setEndValue(0.0);   // 最终透明度为 0
    fadeOutAnimation->setEasingCurve(QEasingCurve::InCubic);

    // 配置动画组：淡入 -> 停留 -> 淡出
    animationGroup->addAnimation(fadeInAnimation);
    animationGroup->addPause(duration); // 停留指定时间
    animationGroup->addAnimation(fadeOutAnimation);

    // 动画结束后销毁窗口
    connect(animationGroup, &QSequentialAnimationGroup::finished, this, &CreateNotification::deleteLater);

    // 显示窗口并启动动画
    this->show();
    animationGroup->start();
}
