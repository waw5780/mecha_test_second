#include "feeder_performance_test_view_model.h"

namespace ViewModels {
FeederPerformanceTestViewModel::FeederPerformanceTestViewModel(
    QObject *parent) : QObject(parent)
{
    m_step1 = 30;
    m_step2 = 40;
    m_step3 = 50;
    m_step4 = 60;
    m_step5 = 0;
    m_step6 = 0;
    m_step7 = 0;
    m_step8 = 0;
    m_step9 = 0;
    m_step10 = 0;
    m_stepMeasureTime = 300;
    m_stepMeasureCount = 10;
    m_feeder1 = true;
    m_feeder2 = true;
    m_feeder3 = false;
    m_feeder4 = false;
    m_feeder5 = false;
    m_feeder6 = false;
}
FeederPerformanceTestViewModel::~FeederPerformanceTestViewModel()
{
}
double FeederPerformanceTestViewModel::step1() const
{
    return m_step1;
}
double FeederPerformanceTestViewModel::step2() const
{
    return m_step2;
}
double FeederPerformanceTestViewModel::step3() const
{
    return m_step3;
}
double FeederPerformanceTestViewModel::step4() const
{
    return m_step4;
}
double FeederPerformanceTestViewModel::step5() const
{
    return m_step5;
}
double FeederPerformanceTestViewModel::step6() const
{
    return m_step6;
}
double FeederPerformanceTestViewModel::step7() const
{
    return m_step7;
}
double FeederPerformanceTestViewModel::step8() const
{
    return m_step8;
}
double FeederPerformanceTestViewModel::step9() const
{
    return m_step9;
}
double FeederPerformanceTestViewModel::step10() const
{
    return m_step10;
}
void FeederPerformanceTestViewModel::setStep1(double newStep1)
{
    if (m_step1 != newStep1) {
        m_step1 = newStep1;
        emit step1Changed();
    }
}
void FeederPerformanceTestViewModel::setStep2(double newStep2)
{
    if (m_step2 != newStep2) {
        m_step2 = newStep2;
        emit step2Changed();
    }
}
void FeederPerformanceTestViewModel::setStep3(double newStep3)
{
    if (m_step3 != newStep3) {
        m_step3 = newStep3;
        emit step3Changed();
    }
}
void FeederPerformanceTestViewModel::setStep4(double newStep4)
{
    if (m_step4 != newStep4) {
        m_step4 = newStep4;
        emit step4Changed();
    }
}
void FeederPerformanceTestViewModel::setStep5(double newStep5)
{
    if (m_step5 != newStep5) {
        m_step5 = newStep5;
        emit step5Changed();
    }
}
void FeederPerformanceTestViewModel::setStep6(double newStep6)
{
    if (m_step6 != newStep6) {
        m_step6 = newStep6;
        emit step6Changed();
    }
}
void FeederPerformanceTestViewModel::setStep7(double newStep7)
{
    if (m_step7 != newStep7) {
        m_step7 = newStep7;
        emit step7Changed();
    }
}
void FeederPerformanceTestViewModel::setStep8(double newStep8)
{
    if (m_step8 != newStep8) {
        m_step8 = newStep8;
        emit step8Changed();
    }
}
void FeederPerformanceTestViewModel::setStep9(double newStep9)
{
    if (m_step9 != newStep9) {
        m_step9 = newStep9;
        emit step9Changed();
    }
}
void FeederPerformanceTestViewModel::setStep10(double newStep10)
{
    if (m_step10 != newStep10) {
        m_step10 = newStep10;
        emit step10Changed();
    }
}

int FeederPerformanceTestViewModel::stepMeasureTime() const
{
    return m_stepMeasureTime;
}
void FeederPerformanceTestViewModel::setStepMeasureTime(int newSetStepMeasureTime)
{
    if (m_stepMeasureTime != newSetStepMeasureTime) {
        m_stepMeasureTime = newSetStepMeasureTime;
        emit stepMeasureTimeChanged();
    }
}
int FeederPerformanceTestViewModel::stepMeasureCount() const
{
    return m_stepMeasureCount;
}
void FeederPerformanceTestViewModel::setStepMeasureCount(int newSetStepMeasureCount)
{
    if (m_stepMeasureCount != newSetStepMeasureCount) {
        m_stepMeasureCount = newSetStepMeasureCount;
        emit stepMeasureCountChanged();
    }
}

bool FeederPerformanceTestViewModel::feeder1() const
{
    return m_feeder1;
}
bool FeederPerformanceTestViewModel::feeder2() const
{
    return m_feeder2;
}
bool FeederPerformanceTestViewModel::feeder3() const
{
    return m_feeder3;
}
bool FeederPerformanceTestViewModel::feeder4() const
{
    return m_feeder4;
}
bool FeederPerformanceTestViewModel::feeder5() const
{
    return m_feeder5;
}
bool FeederPerformanceTestViewModel::feeder6() const
{
    return m_feeder6;
}
void FeederPerformanceTestViewModel::setFeeder1(bool newFeeder1)
{
    if (m_feeder1 != newFeeder1) {
        m_feeder1 = newFeeder1;
        emit feeder1Changed();
    }
}
void FeederPerformanceTestViewModel::setFeeder2(bool newFeeder2)
{
    if (m_feeder2 != newFeeder2) {
        m_feeder2 = newFeeder2;
        emit feeder2Changed();
    }
}
void FeederPerformanceTestViewModel::setFeeder3(bool newFeeder3)
{
    if (m_feeder3 != newFeeder3) {
        m_feeder3 = newFeeder3;
        emit feeder3Changed();
    }
}
void FeederPerformanceTestViewModel::setFeeder4(bool newFeeder4)
{
    if (m_feeder4 != newFeeder4) {
        m_feeder4 = newFeeder4;
        emit feeder4Changed();
    }
}
void FeederPerformanceTestViewModel::setFeeder5(bool newFeeder5)
{
    if (m_feeder5 != newFeeder5) {
        m_feeder5 = newFeeder5;
        emit feeder5Changed();
    }
}
void FeederPerformanceTestViewModel::setFeeder6(bool newFeeder6)
{
    if (m_feeder6 != newFeeder6) {
        m_feeder6 = newFeeder6;
        emit feeder6Changed();
    }
}
}
