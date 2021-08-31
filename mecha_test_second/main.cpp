#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlEngine>
#include <QQmlContext>
#include <boot_strapper.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    BootStrapper bootStrapper;
    bootStrapper.init();

    engine.rootContext()->setContextProperty("mainViewModel", bootStrapper.mainViewModel());
    engine.rootContext()->setContextProperty("feederPerformanceTestViewModel",
                                             bootStrapper.feederPerformanceTestViewModel());
    engine.rootContext()->setContextProperty("feederMinimumFindViewModel",
                                             bootStrapper.feederMinimumFindViewModel());
    engine.rootContext()->setContextProperty("mainTestModel", bootStrapper.mainTestModel());
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
