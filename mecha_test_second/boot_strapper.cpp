#include "boot_strapper.h"

BootStrapper::BootStrapper()
{
}

BootStrapper::~BootStrapper()
{
}

void BootStrapper::init()
{
    m_grbl = new Devices::Grbl();
    m_scale = new Devices::Scale();
    m_mainControlModel = new Control::MainControlModel(m_grbl, m_scale);
    m_feederMinimumFindViewModel = new ViewModels::FeederMinimumFindViewModel();
    m_feederPerformanceTestViewModel = new ViewModels::FeederPerformanceTestViewModel();
    m_mainViewModel = new ViewModels::MainViewModel(m_mainControlModel,
                                                    m_feederPerformanceTestViewModel,
                                                    m_feederMinimumFindViewModel);
    m_mainTestModel = new TestModels::MainTestModel(m_mainViewModel);
    m_grbl->setSerialPort();
    m_scale->setSerialPort();
}

ViewModels::MainViewModel *BootStrapper::mainViewModel() const
{
    return m_mainViewModel;
}
ViewModels::FeederPerformanceTestViewModel *BootStrapper::feederPerformanceTestViewModel() const
{
    return m_feederPerformanceTestViewModel;
}
ViewModels::FeederMinimumFindViewModel *BootStrapper::feederMinimumFindViewModel() const
{
    return m_feederMinimumFindViewModel;
}
Control::MainControlModel *BootStrapper::mainControlModel() const
{
    return m_mainControlModel;
}
TestModels::MainTestModel *BootStrapper::mainTestModel() const
{
    return m_mainTestModel;
}
