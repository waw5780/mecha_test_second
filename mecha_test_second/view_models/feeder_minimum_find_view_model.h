#pragma once

#include <QObject>
#include <QThread>
#include <QSerialPort>

namespace ViewModels {

class FeederMinimumFindViewModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double initialPercent READ initialPercent WRITE setInitialPercent NOTIFY
               initialPercentChanged)
    Q_PROPERTY(double firstStep READ firstStep WRITE setFirstStep NOTIFY firstStepChanged)
    Q_PROPERTY(double secondStep READ secondStep WRITE setSecondStep NOTIFY secondStepChanged)
    Q_PROPERTY(double minimumRange READ minimumRange WRITE setMinimumRange NOTIFY minimumRangeChanged)
    Q_PROPERTY(double minimumTarget READ minimumTarget WRITE setMinimumTarget NOTIFY
               minimumTargetChanged)
    Q_PROPERTY(int findCount READ findCount WRITE setFindCount NOTIFY findCountChanged)
    Q_PROPERTY(int findTime READ findTime WRITE setFindTime NOTIFY findTimeChanged)
    Q_PROPERTY(int finalFindCount READ finalFindCount WRITE setFinalFindCount NOTIFY
               finalFindCountChanged)
    Q_PROPERTY(bool feeder1 READ feeder1 WRITE setFeeder1 NOTIFY feeder1Changed)
    Q_PROPERTY(bool feeder2 READ feeder2 WRITE setFeeder2 NOTIFY feeder2Changed)
    Q_PROPERTY(bool feeder3 READ feeder3 WRITE setFeeder3 NOTIFY feeder3Changed)
    Q_PROPERTY(bool feeder4 READ feeder4 WRITE setFeeder4 NOTIFY feeder4Changed)
    Q_PROPERTY(bool feeder5 READ feeder5 WRITE setFeeder5 NOTIFY feeder5Changed)
    Q_PROPERTY(bool feeder6 READ feeder6 WRITE setFeeder6 NOTIFY feeder6Changed)
public:
    explicit FeederMinimumFindViewModel(QObject *parent = nullptr);
    ~FeederMinimumFindViewModel();

    double initialPercent() const;
    double firstStep() const;
    double secondStep() const;
    double minimumRange() const;
    double minimumTarget() const;
    int findCount() const;
    int findTime() const;
    int finalFindCount() const;

    void setInitialPercent(double newInitialPercent);
    void setFirstStep(double newFirstStep);
    void setSecondStep(double newSecondStep);
    void setMinimumRange(double newMinimumRange);
    void setMinimumTarget(double newMinimumTarget);
    void setFindCount(int newFindCount);
    void setFindTime(int newFindTime);
    void setFinalFindCount(int newFinalFindCount);

    bool feeder1() const;
    bool feeder2() const;
    bool feeder3() const;
    bool feeder4() const;
    bool feeder5() const;
    bool feeder6() const;
    void setFeeder1(bool newFeeder1);
    void setFeeder2(bool newFeeder2);
    void setFeeder3(bool newFeeder3);
    void setFeeder4(bool newFeeder4);
    void setFeeder5(bool newFeeder5);
    void setFeeder6(bool newFeeder6);
signals:
    void initialPercentChanged();
    void firstStepChanged();
    void secondStepChanged();
    void minimumRangeChanged();
    void minimumTargetChanged();
    void findCountChanged();
    void findTimeChanged();
    void finalFindCountChanged();

    void feeder1Changed();
    void feeder2Changed();
    void feeder3Changed();
    void feeder4Changed();
    void feeder5Changed();
    void feeder6Changed();
private:
    double m_initialPercent;
    double m_firstStep;
    double m_secondStep;
    double m_minimumRange;
    double m_minimumTarget;
    int m_findCount;
    int m_findTime;
    int m_finalFindCount;

    bool m_feeder1;
    bool m_feeder2;
    bool m_feeder3;
    bool m_feeder4;
    bool m_feeder5;
    bool m_feeder6;
};
}
