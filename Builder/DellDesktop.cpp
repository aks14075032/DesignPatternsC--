//
// Created by Apli.ai on 11/07/22.
//
#include "DellDesktop.h"

void DellDesktopBuilder::buildMonitor() {
    desktop->setMonitor("Dell Monitor");
}

void DellDesktopBuilder::buildKeyBoard() {
    desktop->setKeyboard("Dell Keyboard");
}

void DellDesktopBuilder::buildMouse() {
    desktop->setMouse("Dell Mouse");
}

void DellDesktopBuilder::buildSpeaker() {
    desktop->setSpeaker("Dell Speaker");
}

void DellDesktopBuilder::buildRam() {
    desktop->setRam("Dell Ram");
}

void DellDesktopBuilder::buildProcessor() {
    desktop->setProcessor("Dell Processor");
}

void DellDesktopBuilder::buildMotherBoard() {
    desktop->setMotherBoard("Dell MotherBoard");
}
