#include "feeder_minimum_find_view_model.h"

namespace ViewModels {
FeederMinimumFindViewModel::FeederMinimumFindViewModel(QObject *parent) : QObject(parent)
{
    m_initialPercent = 0.5;
    m_firstStep = 5;
    m_secondStep = 0.5;
    m_minimumRange = 0;
    m_minimumTarget = 0.02;
    m_findCount = 3;
    m_findTime = 300;
    m_finalFindCount = 10;
    m_feeder1 = true;
    m_feeder2 = true;
    m_feeder3 = false;
    m_feeder4 = false;
    m_feeder5 = false;
    m_feeder6 = false;
}
FeederMinimumFindViewModel::~FeederMinimumFindViewModel()
{
}
double FeederMinimumFindViewModel::initialPercent() const
{
    return m_initialPercent;
}
double FeederMinimumFindViewModel::firstStep() const
{
    return m_firstStep;
}
double FeederMinimumFindViewModel::secondStep() const
{
    return m_secondStep;
}
double FeederMinimumFindViewModel::minimumRange() const
{
    return m_minimumRange;
}
double FeederMinimumFindViewModel::minimumTarget() const
{
    return m_minimumTarget;
}
int FeederMinimumFindViewModel::findCount() const
{
    return m_findCount;
}
int FeederMinimumFindViewModel::findTime() const
{
    return m_findTime;
}
int FeederMinimumFindViewModel::finalFindCount() const
{
    return m_finalFindCount;
}
void FeederMinimumFindViewModel::setInitialPercent(double newInitialPercent)
{
    if (m_initialPercent != newInitialPercent) {
        m_initialPercent = newInitialPercent;
        emit initialPercentChanged();
    }
}
void FeederMinimumFindViewModel::setFirstStep(double newFirstStep)
{
    if (m_firstStep != newFirstStep) {
        m_firstStep = newFirstStep;
        emit firstStepChanged();
    }
}
void FeederMinimumFindViewModel::setSecondStep(double newSecondStep)
{
    if (m_secondStep != newSecondStep) {
        m_secondStep = newSecondStep;
        emit secondStepChanged();
    }
}
void FeederMinimumFindViewModel::setMinimumRange(double newMinimumRange)
{
    if (m_minimumRange != newMinimumRange) {
        m_minimumRange = newMinimumRange;
        emit minimumRangeChanged();
    }
}
void FeederMinimumFindViewModel::setMinimumTarget(double newMinimumTarget)
{
    if (m_minimumTarget != newMinimumTarget) {
        m_minimumTarget = newMinimumTarget;
        emit minimumTargetChanged();
    }
}
void FeederMinimumFindViewModel::setFindCount(int newFindCount)
{
    if (m_findCount != newFindCount) {
        m_findCount = newFindCount;
        emit findCountChanged();
    }
}
void FeederMinimumFindViewModel::setFindTime(int newFindTime)
{
    if (m_findTime != newFindTime) {
        m_findTime = newFindTime;
        emit findTimeChanged();
    }
}
void FeederMinimumFindViewModel::setFinalFindCount(int newFinalFindCount)
{
    if (m_finalFindCount != newFinalFindCount) {
        m_finalFindCount = newFinalFindCount;
        emit finalFindCountChanged();
    }
}

bool FeederMinimumFindViewModel::feeder1() const
{
    return m_feeder1;
}
bool FeederMinimumFindViewModel::feeder2() const
{
    return m_feeder2;
}
bool FeederMinimumFindViewModel::feeder3() const
{
    return m_feeder3;
}
bool FeederMinimumFindViewModel::feeder4() const
{
    return m_feeder4;
}
bool FeederMinimumFindViewModel::feeder5() const
{
    return m_feeder5;
}
bool FeederMinimumFindViewModel::feeder6() const
{
    return m_feeder6;
}
void FeederMinimumFindViewModel::setFeeder1(bool newFeeder1)
{
    if (m_feeder1 != newFeeder1) {
        m_feeder1 = newFeeder1;
        emit feeder1Changed();
    }
}
void FeederMinimumFindViewModel::setFeeder2(bool newFeeder2)
{
    if (m_feeder2 != newFeeder2) {
        m_feeder2 = newFeeder2;
        emit feeder2Changed();
    }
}
void FeederMinimumFindViewModel::setFeeder3(bool newFeeder3)
{
    if (m_feeder3 != newFeeder3) {
        m_feeder3 = newFeeder3;
        emit feeder3Changed();
    }
}
void FeederMinimumFindViewModel::setFeeder4(bool newFeeder4)
{
    if (m_feeder4 != newFeeder4) {
        m_feeder4 = newFeeder4;
        emit feeder4Changed();
    }
}
void FeederMinimumFindViewModel::setFeeder5(bool newFeeder5)
{
    if (m_feeder5 != newFeeder5) {
        m_feeder5 = newFeeder5;
        emit feeder5Changed();
    }
}
void FeederMinimumFindViewModel::setFeeder6(bool newFeeder6)
{
    if (m_feeder6 != newFeeder6) {
        m_feeder6 = newFeeder6;
        emit feeder6Changed();
    }
}
}
