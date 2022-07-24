//
// Created by Apli.ai on 11/07/22.
//

#ifndef BUILDER_DELLDESKTOP_H
#define BUILDER_DELLDESKTOP_H

#include "DesktopBuilder.h"

class DellDesktopBuilder : public DesktopBuilder {
    void buildMonitor();
    void buildKeyBoard();
    void buildMouse();
    void buildSpeaker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();

};

#endif //BUILDER_DELLDESKTOP_H
