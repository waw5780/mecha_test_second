#pragma once

#include <QObject>
#include <QThread>
#include <QSerialPort>
#include <devices/grbl.h>
#include <devices/scale.h>

namespace Control {
class MainControlModel : public QObject
{
    Q_OBJECT
public:
    explicit MainControlModel(
        Devices::Grbl *grbl,
        Devices::Scale *scale,
        QObject *parent = nullptr);
    explicit MainControlModel(QObject *parent = nullptr);
    ~MainControlModel();

    void splitterOn();
    void spliiterOff();
    void feederOn(int feederIndex, double vibration);
    void feederOff(int feederIndex, double vibration = 0);
    void feederAllOff(double vibration = 0);
    void powderGasOn(double gas);
    void powderGasOff(const double gas = 0.0);
    void feederCleaningOn();
    void feederCleaningOff();
    void feederReset();

    double getScaleWeight();
signals:
    void weightChanged(double weight);
    void powderGasChanged(double powderGas);
    void feederChanged(QVector<double> feederValues);
private:
    Devices::Grbl *m_grbl;
    Devices::Scale *m_scale;
};
}
