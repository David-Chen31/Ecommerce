QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17
QT += network
QT += core gui network


msvc {
    QMAKE_CFLAGS += /utf-8
    QMAKE_CXXFLAGS += /utf-8
}

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0



SOURCES += \
    Communication/chatmessage.cpp \
    Communication/communication.cpp \
    Communication/contact.cpp \
    Communication/messagearea.cpp \
    commodity.cpp \
    findgoodcommodities.cpp \
    function_zone.cpp \
    home.cpp \
    itemdisplay.cpp \
    itemincart.cpp \
    iteminpurchasehistory.cpp \
    log_in.cpp \
    logo.cpp \
    main.cpp \
    mainwindow.cpp \
    notification/create_notification.cpp \
    objects.cpp \
    objecttojson.cpp \
    promotion.cpp \
    promotion_item_display.cpp \
    purchasehistory.cpp \
    register.cpp \
    root.cpp \
    shoppingcart.cpp \
    soap/soapC.cpp \
    soap/soapWholeMapperSoapBindingProxy.cpp \
    soap/stdsoap2.cpp \
    transobjects.cpp

HEADERS += \
    Communication/chatmessage.h \
    Communication/communication.h \
    Communication/contact.h \
    Communication/messagearea.h \
    commodity.h \
    findgoodcommodities.h \
    function_zone.h \
    home.h \
    itemdisplay.h \
    itemincart.h \
    iteminpurchasehistory.h \
    log_in.h \
    logo.h \
    mainwindow.h \
    notification/create_notification.h \
    objects.h \
    objecttojson.h \
    promotion.h \
    promotion_item_display.h \
    purchasehistory.h \
    register.h \
    root.h \
    shoppingcart.h \
    soap/WholeMapperSoapBinding.nsmap \
    soap/soapH.h \
    soap/soapStub.h \
    soap/soapWholeMapperSoapBindingProxy.h \
    soap/soap_head.h \
    soap/stdsoap2.h \
    stringtrans.h \
    transobjects.h

FORMS += \
    Communication/chatmessage.ui \
    Communication/communication.ui \
    Communication/contact.ui \
    Communication/messagearea.ui \
    commodity.ui \
    draft.ui \
    findgoodcommodities.ui \
    home.ui \
    itemdisplay.ui \
    itemincart.ui \
    iteminpurchasehistory.ui \
    log_in.ui \
    logo.ui \
    mainwindow.ui \
    promotion.ui \
    promotion_item_display.ui \
    purchasehistory.ui \
    register.ui \
    root.ui \
    shoppingcart.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    image/shop.png \
    soap/soapReadme.md

RC_ICONS = Icon\logo.ico
