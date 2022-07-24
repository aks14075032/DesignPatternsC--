//
// Created by Apli.ai on 11/07/22.
//

#ifndef BUILDER_HPDESKTOP_H
#define BUILDER_HPDESKTOP_H

#include "DesktopBuilder.h"

class HPDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();

};

#endif //BUILDER_HPDESKTOP_H
