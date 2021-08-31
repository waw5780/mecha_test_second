#pragma once

#include <view_models/main_view_model.h>
#include <view_models/feeder_performance_test_view_model.h>
#include <view_models/feeder_minimum_find_view_model.h>
#include <model/main_test_model.h>

class BootStrapper
{
public:
    BootStrapper();
    ~BootStrapper();

    void init();
    ViewModels::MainViewModel *mainViewModel() const;
    ViewModels::FeederPerformanceTestViewModel *feederPerformanceTestViewModel() const;
    ViewModels::FeederMinimumFindViewModel *feederMinimumFindViewModel() const;
    Control::MainControlModel *mainControlModel() const;
    TestModels::MainTestModel *mainTestModel() const;
private:
    ViewModels::MainViewModel *m_mainViewModel;
    ViewModels::FeederPerformanceTestViewModel *m_feederPerformanceTestViewModel;
    ViewModels::FeederMinimumFindViewModel *m_feederMinimumFindViewModel;
    Control::MainControlModel *m_mainControlModel;
    TestModels::MainTestModel *m_mainTestModel;
    Devices::Grbl *m_grbl;
    Devices::Scale *m_scale;
};
