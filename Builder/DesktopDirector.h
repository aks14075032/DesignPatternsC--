//
// Created by Apli.ai on 11/07/22.
//

#ifndef BUILDER_DESKTOPDIRECTOR_H
#define BUILDER_DESKTOPDIRECTOR_H

#include "DesktopBuilder.h"
class DesktopDirector{
private:
    DesktopBuilder* desktopBuilder;
public:
    DesktopDirector(DesktopBuilder* pDesktopBuilder){
        desktopBuilder = pDesktopBuilder;
    }

    Desktop* getDesktop(){
        return desktopBuilder->getDesktop();
    }

    Desktop* BuildDesktop(){
        desktopBuilder->buildMonitor();
        desktopBuilder->buildKeyBoard();
        desktopBuilder->buildMotherBoard();
        desktopBuilder->buildMouse();
        desktopBuilder->buildProcessor();
        desktopBuilder->buildRam();
        desktopBuilder->buildSpeaker();
        return desktopBuilder->getDesktop();
    }

};
#endif //BUILDER_DESKTOPDIRECTOR_H
