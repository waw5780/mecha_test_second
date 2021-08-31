#include "main_test_model.h"

namespace TestModels {
MainTestModel::MainTestModel(
    ViewModels::MainViewModel *mainViewModel,
    QObject *parent) :
    QObject(parent),
    m_mainViewModel(mainViewModel)
{
    m_nowWeight = 0;
}
bool MainTestModel::allStart() const
{
    return m_allStart;
}
void MainTestModel::setAllStart(bool newAllStart)
{
    if (m_allStart != newAllStart) {
        m_allStart = newAllStart;
        emit allStartChanged();
    }
}
void MainTestModel::test()
{
    double weight = m_mainViewModel->getScaleWeight();
    qDebug() << weight;
    qDebug() << m_mainViewModel->getMinimumFindSetting();
    qDebug() << m_mainViewModel->getMinimumFindRateSetting();
    qDebug() << m_mainViewModel->getMinimumFindFeederNum();

    qDebug() << m_mainViewModel->getPerformanceTestFeederRate();
    qDebug() << m_mainViewModel->getPerformanceTestSetting();
    qDebug() << m_mainViewModel->getPerformanceTestFeederNum();
}
}
