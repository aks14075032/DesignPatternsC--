//
// Created by Apli.ai on 11/07/22.
//

#include "HPDesktop.h"

void HPDesktopBuilder::buildMonitor() {
    desktop->setMonitor("HP Monitor");
}

void HPDesktopBuilder::buildKeyBoard() {
    desktop->setKeyboard("HP Keyboard");
}

void HPDesktopBuilder::buildMouse() {
    desktop->setMouse("HP Mouse");
}

void HPDesktopBuilder::buildSpeaker() {
    desktop->setSpeaker("HP Speaker");
}

void HPDesktopBuilder::buildRam() {
    desktop->setRam("HP Ram");
}

void HPDesktopBuilder::buildProcessor() {
    desktop->setProcessor("HP Processor");
}

void HPDesktopBuilder::buildMotherBoard() {
    desktop->setMotherBoard("HP MotherBoard");
}
