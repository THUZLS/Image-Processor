//
//  imageProcessor.h
//
//  Created by ZLS-PC  on 2016/12/18.
//  Copyright © 2016年 张玲松. All rights reserved.
//

#include <QApplication>
#include "qtquick2applicationviewer.h"
#include <QtQml>
#include "imageProcessor.h"
#include <QQuickItem>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    qmlRegisterType<ImageProcessor>("an.qt.ImageProcessor", 1, 0,"ImageProcessor");

    QtQuick2ApplicationViewer viewer;
    viewer.rootContext()->setContextProperty("imageProcessor", new ImageProcessor);

    viewer.setMainQmlFile(QStringLiteral("qml/imageProcessor/main.qml"));
    viewer.showExpanded();

    /*
    QQuickItem * rootItem = viewer.rootObject();
    qDebug() << rootItem->findChild<QObject*>("imageViewer");
    */

    return app.exec();
}
