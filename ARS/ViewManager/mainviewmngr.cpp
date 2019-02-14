#include "mainviewmngr.h"
#include <iostream>
#include "Model/settings.h"

MainViewMngr::MainViewMngr(QObject *parent) : QObject(parent){
        appName("Radar Target Simulator");
        powerOn(false);
        distance(0);
        velocity(0.0);
        distancePreset1(0);
        distancePreset2(0);
        distancePreset3(0);
        distancePreset4(0);
        velocityPreset1(0);
        velocityPreset2(0);
        velocityPreset3(0);
        velocityPreset4(0);
        feedbackAreaVisible(true);
        feedbackMessage("System Initializing...");
}

void MainViewMngr::Initialize(const Settings &config){
    appName(config.getApplicationName());
    powerOn(config.getInitialPowerState());
    distance(config.getInitialDistanceM());
    velocity(config.getInitialSpeedKph());
    velocityPreset1(config.getVelocity1());
    velocityPreset2(config.getVelocity2());
    velocityPreset3(config.getVelocity3());
    velocityPreset4(config.getVelocity4());
    distancePreset1(config.getDistance1());
    distancePreset2(config.getDistance2());
    distancePreset3(config.getDistance3());
    distancePreset4(config.getDistance4());
}

//void MainViewMngr::debugPowerOn(bool value){
//    std::cout <<"In debugPowerOn with value: " << value << std::endl;
//}
//void MainViewMngr::debugDistanceChanged(double value){
//    std::cout <<"In debugDistanceChanged with value: " << value << std::endl;
//}
//void MainViewMngr::debugVelocityChanged(double value){
//    std::cout <<"In debugVelocityChanged with value: " << value << std::endl;
//}

void MainViewMngr::onStatusMessageChanged(const QString &msg)
{

}

void MainViewMngr::onInstrumentInitializationDone(bool value)
{

}
