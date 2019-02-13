#include "mainviewmngr.h"
#include <iostream>

MainViewMngr::MainViewMngr(QObject *parent) : QObject(parent)
{
        appName("Radar Target Simulator");
        powerOn(false);
        connect(this, &MainViewMngr::powerOnChanged, &MainViewMngr::debugPowerOn);
}

void MainViewMngr::debugPowerOn(bool value){
    std::cout <<"In debugPowerOn with value: " << value << std::endl;
}
