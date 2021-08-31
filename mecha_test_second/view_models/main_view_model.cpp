#include "main_view_model.h"


namespace ViewModels {
MainViewModel::MainViewModel(
    Control::MainControlModel *mainControlModel,
    ViewModels::FeederPerformanceTestViewModel *feederPerformanceTestViewModel,
    ViewModels::FeederMinimumFindViewModel *feederMinimumFindViewModel,
    QObject *parent) :
    QObject(parent),
    m_mainControlModel(mainControlModel),
    m_feederPerformanceTestViewModel(feederPerformanceTestViewModel),
    m_feederMinimumFindViewModel(feederMinimumFindViewModel)
{
    m_powderGas = 0;
    m_targetPowderGas = 0;
    connect(m_mainControlModel, &Control::MainControlModel::weightChanged, this,
            &MainViewModel::setScaleWeight);
    connect(m_mainControlModel, &Control::MainControlModel::powderGasChanged, this,
            &MainViewModel::setPowderGas);
    connect(m_mainControlModel, &Control::MainControlModel::feederChanged, this,
            &MainViewModel::setFeederNum);
}

double MainViewModel::scaleWeight() const
{
    return m_scaleWeight;
}
void MainViewModel::setScaleWeight(double newScaleWeight)
{
    if (m_scaleWeight != newScaleWeight) {
        m_scaleWeight = newScaleWeight;
        emit scaleWeightChanged();
    }
}
double MainViewModel::powderGas() const
{
    return m_powderGas;
}
void MainViewModel::setPowderGas(double newPowderGas)
{
    if (m_powderGas != newPowderGas) {
        m_powderGas = newPowderGas;
        emit powderGasChanged();
    }
}
QVector<double> MainViewModel::feederNum() const
{
    return m_feederNum;
}
void MainViewModel::setFeederNum(QVector<double> newFeederNum)
{
    if (m_feederNum != newFeederNum) {
        m_feederNum = newFeederNum;
        emit feederNumChanged();
    }
}
double MainViewModel::targetPowderGas() const
{
    return m_targetPowderGas;
}
void MainViewModel::setTargetPowderGas(double newTragetPowderGas)
{
    if (m_targetPowderGas != newTragetPowderGas) {
        m_targetPowderGas = newTragetPowderGas;
        qDebug() << m_targetPowderGas;
        emit targetPowderGasChanged();
    }
}
MainViewModel::~MainViewModel()
{
}
double MainViewModel::getScaleWeight()
{
    return m_mainControlModel->getScaleWeight();
}
QVector<double> MainViewModel::getMinimumFindSetting()
{
    QVector<double> minimumFindSetting;
    minimumFindSetting.append(m_feederMinimumFindViewModel->initialPercent());
    minimumFindSetting.append(m_feederMinimumFindViewModel->firstStep());
    minimumFindSetting.append(m_feederMinimumFindViewModel->secondStep());
    minimumFindSetting.append(m_feederMinimumFindViewModel->minimumRange());
    minimumFindSetting.append(m_feederMinimumFindViewModel->minimumTarget());

    return minimumFindSetting;
}
QVector<int> MainViewModel::getMinimumFindRateSetting()
{
    QVector<int> minimumFindRateSetting;
    minimumFindRateSetting.append(m_feederMinimumFindViewModel->findCount());
    minimumFindRateSetting.append(m_feederMinimumFindViewModel->findTime());
    minimumFindRateSetting.append(m_feederMinimumFindViewModel->finalFindCount());

    return minimumFindRateSetting;
}
QVector<bool> MainViewModel::getMinimumFindFeederNum()
{
    QVector<bool> minimumFindFeederNum;
    minimumFindFeederNum.append(m_feederMinimumFindViewModel->feeder1());
    minimumFindFeederNum.append(m_feederMinimumFindViewModel->feeder2());
    minimumFindFeederNum.append(m_feederMinimumFindViewModel->feeder3());
    minimumFindFeederNum.append(m_feederMinimumFindViewModel->feeder4());
    minimumFindFeederNum.append(m_feederMinimumFindViewModel->feeder5());
    minimumFindFeederNum.append(m_feederMinimumFindViewModel->feeder6());

    return minimumFindFeederNum;
}
QVector<double> MainViewModel::getPerformanceTestFeederRate()
{
    QVector<double> performanceTestFeederRate;
    performanceTestFeederRate.append(m_feederPerformanceTestViewModel->step1());
    performanceTestFeederRate.append(m_feederPerformanceTestViewModel->step2());
    performanceTestFeederRate.append(m_feederPerformanceTestViewModel->step3());
    performanceTestFeederRate.append(m_feederPerformanceTestViewModel->step4());
    performanceTestFeederRate.append(m_feederPerformanceTestViewModel->step5());
    performanceTestFeederRate.append(m_feederPerformanceTestViewModel->step6());
    performanceTestFeederRate.append(m_feederPerformanceTestViewModel->step7());
    performanceTestFeederRate.append(m_feederPerformanceTestViewModel->step8());
    performanceTestFeederRate.append(m_feederPerformanceTestViewModel->step9());
    performanceTestFeederRate.append(m_feederPerformanceTestViewModel->step10());

    return performanceTestFeederRate;
}
QVector<int> MainViewModel::getPerformanceTestSetting()
{
    QVector<int> performanceTestSetting;
    performanceTestSetting.append(m_feederPerformanceTestViewModel->stepMeasureTime());
    performanceTestSetting.append(m_feederPerformanceTestViewModel->stepMeasureCount());

    return performanceTestSetting;
}
QVector<bool> MainViewModel::getPerformanceTestFeederNum()
{
    QVector<bool> performanceTestFeederNum;
    performanceTestFeederNum.append(m_feederPerformanceTestViewModel->feeder1());
    performanceTestFeederNum.append(m_feederPerformanceTestViewModel->feeder2());
    performanceTestFeederNum.append(m_feederPerformanceTestViewModel->feeder3());
    performanceTestFeederNum.append(m_feederPerformanceTestViewModel->feeder4());
    performanceTestFeederNum.append(m_feederPerformanceTestViewModel->feeder5());
    performanceTestFeederNum.append(m_feederPerformanceTestViewModel->feeder6());

    return performanceTestFeederNum;
}
void MainViewModel::allStart()
{
    qDebug() << "hi";
}
}
