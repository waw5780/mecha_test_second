#pragma once

#include <QObject>
#include <QThread>
#include <QSerialPort>
#include <model/main_control_model.h>
#include <view_models/feeder_minimum_find_view_model.h>
#include <view_models/feeder_performance_test_view_model.h>

namespace ViewModels {
class MainViewModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double scaleWeight READ scaleWeight WRITE setScaleWeight NOTIFY scaleWeightChanged)
    Q_PROPERTY(double powderGas READ powderGas WRITE setPowderGas NOTIFY powderGasChanged)
    Q_PROPERTY(QVector<double> feederNum READ feederNum WRITE setFeederNum NOTIFY feederNumChanged)
    Q_PROPERTY(double targetPowderGas READ targetPowderGas WRITE setTargetPowderGas NOTIFY
               targetPowderGasChanged)
public:
    explicit MainViewModel(QObject *parent = nullptr);
    explicit MainViewModel(
        Control::MainControlModel *mainControlModel,
        ViewModels::FeederPerformanceTestViewModel *feederPerformanceTestViewModel,
        ViewModels::FeederMinimumFindViewModel *feederMinimumFindViewModel,
        QObject *parent = nullptr);
    ~MainViewModel();

    double scaleWeight() const;
    void setScaleWeight(double newScaleWeight);

    double powderGas() const;
    void setPowderGas(double newPowderGas);

    QVector<double> feederNum() const;
    void setFeederNum(QVector<double> newFeederNum);

    double targetPowderGas() const;
    void setTargetPowderGas(double newTragetPowderGas);

    double getScaleWeight();

    QVector<double> getMinimumFindSetting();
    QVector<int> getMinimumFindRateSetting();
    QVector<bool> getMinimumFindFeederNum();

    QVector<double> getPerformanceTestFeederRate();
    QVector<int> getPerformanceTestSetting();
    QVector<bool> getPerformanceTestFeederNum();
public slots:
    void allStart();
signals:
    void scaleWeightChanged();
    void powderGasChanged();
    void feederNumChanged();
    void targetPowderGasChanged();
private:
    Control::MainControlModel *m_mainControlModel;
    ViewModels::FeederPerformanceTestViewModel *m_feederPerformanceTestViewModel;
    ViewModels::FeederMinimumFindViewModel *m_feederMinimumFindViewModel;
    double m_scaleWeight;
    double m_powderGas;
    QVector<double> m_feederNum;
    double m_targetPowderGas;

};
}
