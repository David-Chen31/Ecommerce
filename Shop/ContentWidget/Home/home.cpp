#define NOMINMAX // Prevent conflicts with Windows headers

#include "home.h"
#include "ui_home.h"
#include "objects.h"
#include "root/root.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
using namespace QtCharts;

Home::Home(QWidget *parent)
    : ContentWidget(parent)
    , ui(new Ui::Home)
{
    ui->setupUi(this);
    setupSalesChart();
}

Home::~Home()
{
    delete ui;
}

void Home::setupSalesChart()
{
    // 加载订单列表
    ObjectsManager::LoadOrderListByInfo();
    QList<Order*>& orderList = ObjectsManager::GetOrderList();

    // 检查订单列表是否为空
    if (orderList.isEmpty()) {
        qDebug() << "Order list is empty. Cannot display sales chart.";
        return;
    }

    // 统计商品的购买数量
    QMap<QString, int> productSales; // 商品名称 -> 购买数量
    for (Order* order : orderList) {
        QString productName = order->getOrderProductName();
        int productNum = order->getOrderProductNum();
        productSales[productName] += productNum; // 累加购买数量
    }

    // 检查是否有销售数据
    if (productSales.isEmpty()) {
        qDebug() << "No sales data available.";
        return;
    }

    // 创建柱状图数据集
    QBarSet* salesSet = new QBarSet("Sales");
    QStringList categories; // 商品名称列表
    for (auto it = productSales.begin(); it != productSales.end(); ++it) {
        categories << it.key();       // 添加商品名称
        *salesSet << it.value();     // 添加购买数量
    }

    // 找到最大购买数量
    qreal maxSalesValue = 0;
    for (int i = 0; i < salesSet->count(); ++i) {
        maxSalesValue = qMax(maxSalesValue, salesSet->at(i));
    }

    // 创建柱状图系列
    QBarSeries* series = new QBarSeries();
    series->append(salesSet);

    // 创建图表
    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Customer Purchases by Product");
    chart->setAnimationOptions(QChart::SeriesAnimations);

    // 设置 X 轴（商品名称）
    QBarCategoryAxis* axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);

    // 设置 Y 轴（购买数量）
    QValueAxis* axisY = new QValueAxis();
    axisY->setTitleText("Quantity");
    axisY->setLabelFormat("%i");
    axisY->setRange(0, maxSalesValue + 10); // 最大值加一点间距
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    // 删除 QLabel 并替换为图表
    delete ui->chartTitle;
    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->chartLayout->addWidget(chartView);

    // 刷新布局
    ui->chartLayout->update();
    this->update();
}
