#pragma once
#include <QObject>
#include <QThread>
#include <QSerialPort>

namespace ViewModels {

class FeederPerformanceTestViewModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(double step1 READ step1 WRITE setStep1 NOTIFY step1Changed)
    Q_PROPERTY(double step2 READ step2 WRITE setStep2 NOTIFY step2Changed)
    Q_PROPERTY(double step3 READ step3 WRITE setStep3 NOTIFY step3Changed)
    Q_PROPERTY(double step4 READ step4 WRITE setStep4 NOTIFY step4Changed)
    Q_PROPERTY(double step5 READ step5 WRITE setStep5 NOTIFY step5Changed)
    Q_PROPERTY(double step6 READ step6 WRITE setStep6 NOTIFY step6Changed)
    Q_PROPERTY(double step7 READ step7 WRITE setStep7 NOTIFY step7Changed)
    Q_PROPERTY(double step8 READ step8 WRITE setStep8 NOTIFY step8Changed)
    Q_PROPERTY(double step9 READ step9 WRITE setStep9 NOTIFY step9Changed)
    Q_PROPERTY(double step10 READ step10 WRITE setStep10 NOTIFY step10Changed)
    Q_PROPERTY(int stepMeasureTime READ stepMeasureTime WRITE setStepMeasureTime NOTIFY
               stepMeasureTimeChanged)
    Q_PROPERTY(int stepMeasureCount READ stepMeasureCount WRITE setStepMeasureCount NOTIFY
               stepMeasureCountChanged)
    Q_PROPERTY(bool feeder1 READ feeder1 WRITE setFeeder1 NOTIFY feeder1Changed)
    Q_PROPERTY(bool feeder2 READ feeder2 WRITE setFeeder2 NOTIFY feeder2Changed)
    Q_PROPERTY(bool feeder3 READ feeder3 WRITE setFeeder3 NOTIFY feeder3Changed)
    Q_PROPERTY(bool feeder4 READ feeder4 WRITE setFeeder4 NOTIFY feeder4Changed)
    Q_PROPERTY(bool feeder5 READ feeder5 WRITE setFeeder5 NOTIFY feeder5Changed)
    Q_PROPERTY(bool feeder6 READ feeder6 WRITE setFeeder6 NOTIFY feeder6Changed)
public:
    explicit FeederPerformanceTestViewModel(QObject *parent = nullptr);
    ~FeederPerformanceTestViewModel();

    double step1() const;
    double step2() const;
    double step3() const;
    double step4() const;
    double step5() const;
    double step6() const;
    double step7() const;
    double step8() const;
    double step9() const;
    double step10() const;
    void setStep1(double newStep1);
    void setStep2(double newStep2);
    void setStep3(double newStep3);
    void setStep4(double newStep4);
    void setStep5(double newStep5);
    void setStep6(double newStep6);
    void setStep7(double newStep7);
    void setStep8(double newStep8);
    void setStep9(double newStep9);
    void setStep10(double newStep10);

    int stepMeasureTime() const;
    void setStepMeasureTime(int newSetStepMeasureTime);
    int stepMeasureCount() const;
    void setStepMeasureCount(int newSetStepMeasureCount);

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
    void step1Changed();
    void step2Changed();
    void step3Changed();
    void step4Changed();
    void step5Changed();
    void step6Changed();
    void step7Changed();
    void step8Changed();
    void step9Changed();
    void step10Changed();

    void feeder1Changed();
    void feeder2Changed();
    void feeder3Changed();
    void feeder4Changed();
    void feeder5Changed();
    void feeder6Changed();

    void stepMeasureTimeChanged();
    void stepMeasureCountChanged();

private:
    double m_step1;
    double m_step2;
    double m_step3;
    double m_step4;
    double m_step5;
    double m_step6;
    double m_step7;
    double m_step8;
    double m_step9;
    double m_step10;

    int m_stepMeasureTime;
    int m_stepMeasureCount;

    bool m_feeder1;
    bool m_feeder2;
    bool m_feeder3;
    bool m_feeder4;
    bool m_feeder5;
    bool m_feeder6;
};
}
