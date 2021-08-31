#include "main_control_model.h"

namespace Control {
MainControlModel::MainControlModel(
    Devices::Grbl *grbl,
    Devices::Scale *scale,
    QObject *parent) :
    QObject(parent),
    m_grbl(grbl),
    m_scale(scale)
{
    connect(m_scale, &Devices::Scale::weightChanged, this, &MainControlModel::weightChanged);
    connect(m_grbl, &Devices::Grbl::powderGasChanged, this, &MainControlModel::powderGasChanged);
    connect(m_grbl, &Devices::Grbl::feederChanged, this, &MainControlModel::feederChanged);
}

MainControlModel::MainControlModel(QObject *parent) : QObject(parent)
{
}
MainControlModel::~MainControlModel()
{
}
void MainControlModel::splitterOn()
{
    m_grbl->writeSerial(QString("$E81 O1"));
}
void MainControlModel::spliiterOff()
{
    m_grbl->writeSerial(QString("$E81 O0"));
}
void MainControlModel::feederOn(int feederIndex, double vibration)
{
    // m_grbl->writeSerial(QString("$E91 S%1 P%2").arg(feederIndex + 1).arg(vibration, 0, 'f', 1));
    qDebug() << "Feeder On";
}
void MainControlModel::feederOff(int feederIndex, double vibration)
{
    // m_grbl->writeSerial(QString("$E91 S%1 P%2").arg(feederIndex + 1).arg(vibration));
    qDebug() << "Feeder Off";
}
void MainControlModel::feederAllOff(double vibration)
{
    m_grbl->writeSerial(QString("$E91 S1 P%1").arg(vibration));
    m_grbl->writeSerial(QString("$E91 S2 P%1").arg(vibration));
    m_grbl->writeSerial(QString("$E91 S3 P%1").arg(vibration));
    m_grbl->writeSerial(QString("$E91 S4 P%1").arg(vibration));
    m_grbl->writeSerial(QString("$E91 S5 P%1").arg(vibration));
    m_grbl->writeSerial(QString("$E91 S6 P%1").arg(vibration));
}
void MainControlModel::powderGasOn(double gas)
{
    // emit isGasChanged(true); // gas on , off status out
    //m_grbl->writeSerial(QString("$E72 S1 Q%1").arg(gas, 0, 'f', 1));
    qDebug() << gas;
}
void MainControlModel::powderGasOff(const double gas)
{
    // emit isGasChanged(false); // gas on , off status out
    // m_grbl->writeSerial(QString("$E72 S1 Q%1").arg(gas));
    qDebug() << gas;
}
void MainControlModel::feederCleaningOn()
{
    powderGasOn(5);
    splitterOn();
    for (int i = 0; i < 6; i++) {
        feederOn(i, 80);
    }
}
void MainControlModel::feederCleaningOff()
{
    powderGasOff();
    spliiterOff();
    for (int i = 0; i < 6; i++) {
        feederOff(i);
    }
}
void MainControlModel::feederReset()
{
    m_grbl->writeSerial("$E90 WR");
}
double MainControlModel::getScaleWeight()
{
    return m_scale->getWeight();
}
}
