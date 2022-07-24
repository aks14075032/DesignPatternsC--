//
// Created by Apli.ai on 11/07/22.
//

#ifndef BUILDER_DESKTOPBUILDER_H
#define BUILDER_DESKTOPBUILDER_H

#include "Desktop.h"

class DesktopBuilder{
protected:
    Desktop* desktop;
public:
    DesktopBuilder(){
        desktop = new Desktop();
    }
    virtual void buildMonitor()=0;
    virtual void buildKeyBoard()=0;
    virtual void buildMouse()=0;
    virtual void buildSpeaker()=0;
    virtual void buildRam()=0;
    virtual void buildProcessor()=0;
    virtual void buildMotherBoard()=0;

    virtual Desktop* getDesktop(){
        return desktop;
    }
};

#endif //BUILDER_DESKTOPBUILDER_H
