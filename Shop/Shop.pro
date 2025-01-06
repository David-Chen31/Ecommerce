QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QT += network
QT += core gui network
QT += charts


msvc {
    QMAKE_CFLAGS += /utf-8
    QMAKE_CXXFLAGS += /utf-8
}

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ContentWidget/Communication/chat_message.cpp \
    ContentWidget/Communication/contact.cpp \
    ContentWidget/Communication/message_area.cpp \
    ContentWidget/Communication/shop_communication.cpp \
    ContentWidget/Home/home.cpp \
    ContentWidget/OrderManagement/order_management.cpp \
    ContentWidget/OrderManagement/order_widget.cpp \
    ContentWidget/ProductManagement/add_product.cpp \
    ContentWidget/ProductManagement/product_card.cpp \
    ContentWidget/ProductManagement/product_edit.cpp \
    ContentWidget/ProductManagement/product_overview.cpp \
    ContentWidget/Promotion/discount_settings.cpp \
    ContentWidget/Promotion/flash_sale_settings.cpp \
    ContentWidget/Promotion/product_card_promotion.cpp \
    ContentWidget/Promotion/product_selection.cpp \
    ContentWidget/content_widget.cpp \
    log_in.cpp \
    main.cpp \
    mainwindow.cpp \
    notification/create_notification.cpp \
    objects.cpp \
    objecttojson.cpp \
    register.cpp \
    root/root.cpp \
    soap/soapC.cpp \
    soap/soapWholeMapperSoapBindingProxy.cpp \
    soap/stdsoap2.cpp \
    transobjects.cpp

HEADERS += \
    ContentWidget/Communication/chat_message.h \
    ContentWidget/Communication/contact.h \
    ContentWidget/Communication/message_area.h \
    ContentWidget/Communication/shop_communication.h \
    ContentWidget/Home/home.h \
    ContentWidget/OrderManagement/order_management.h \
    ContentWidget/OrderManagement/order_widget.h \
    ContentWidget/ProductManagement/add_product.h \
    ContentWidget/ProductManagement/product_card.h \
    ContentWidget/ProductManagement/product_edit.h \
    ContentWidget/ProductManagement/product_overview.h \
    ContentWidget/Promotion/discount_settings.h \
    ContentWidget/Promotion/flash_sale_settings.h \
    ContentWidget/Promotion/product_card_promotion.h \
    ContentWidget/Promotion/product_selection.h \
    ContentWidget/content_widget.h \
    log_in.h \
    mainwindow.h \
    notification/create_notification.h \
    objects.h \
    objecttojson.h \
    register.h \
    root/root.h \
    soap/WholeMapperSoapBinding.nsmap \
    soap/soapH.h \
    soap/soapStub.h \
    soap/soapWholeMapperSoapBindingProxy.h \
    soap/soap_head.h \
    soap/stdsoap2.h \
    stringtrans.h \
    transobjects.h

FORMS += \
    ContentWidget/Communication/chat_message.ui \
    ContentWidget/Communication/contact.ui \
    ContentWidget/Communication/message_area.ui \
    ContentWidget/Communication/shop_communication.ui \
    ContentWidget/Home/home.ui \
    ContentWidget/OrderManagement/order_management.ui \
    ContentWidget/OrderManagement/order_widget.ui \
    ContentWidget/ProductManagement/add_product.ui \
    ContentWidget/ProductManagement/product_card.ui \
    ContentWidget/ProductManagement/product_edit.ui \
    ContentWidget/ProductManagement/product_overview.ui \
    ContentWidget/Promotion/discount_settings.ui \
    ContentWidget/Promotion/flash_sale_settings.ui \
    ContentWidget/Promotion/product_card_promotion.ui \
    ContentWidget/Promotion/product_selection.ui \
    draft.ui \
    log_in.ui \
    mainwindow.ui \
    register.ui \
    root/root.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc \

RC_ICONS = Icon\logo.ico
