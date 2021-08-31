#pragma once

#include <QObject>
#include <QThread>
#include <QSerialPort>
#include <view_models/main_view_model.h>

namespace TestModels {
class MainTestModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool allStart READ allStart WRITE setAllStart NOTIFY allStartChanged)
public:
    explicit MainTestModel(
        ViewModels::MainViewModel *mainViewModel,
        QObject *parent = nullptr);

    bool allStart() const;
    void setAllStart(bool newAllStart);

signals:
    void allStartChanged();
public slots:
    void test();
private:
    ViewModels::MainViewModel *m_mainViewModel;
    double m_nowWeight;
    bool m_allStart;
};
}
