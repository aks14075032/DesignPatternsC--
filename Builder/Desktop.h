//
// Created by Apli.ai on 11/07/22.
//

#ifndef BUILDER_DESKTOP_H
#define BUILDER_DESKTOP_H
#include <iostream>
#include <string>
using namespace std;

class Desktop{

    //All below strings can be object but kept string for simplicity
    string monitor;
    string keyboard;
    string mouse;
    string speaker;
    string ram;
    string processor;
    string motherBoard;
public:

    const string &getMonitor() const {
        return monitor;
    }

    void setMonitor(const string &monitor) {
        Desktop::monitor = monitor;
    }

    const string &getKeyboard() const {
        return keyboard;
    }

    void setKeyboard(const string &keyboard) {
        Desktop::keyboard = keyboard;
    }

    const string &getMouse() const {
        return mouse;
    }

    void setMouse(const string &mouse) {
        Desktop::mouse = mouse;
    }

    const string &getSpeaker() const {
        return speaker;
    }

    void setSpeaker(const string &speaker) {
        Desktop::speaker = speaker;
    }

    const string &getRam() const {
        return ram;
    }

    void setRam(const string &ram) {
        Desktop::ram = ram;
    }

    const string &getProcessor() const {
        return processor;
    }

    void setProcessor(const string &processor) {
        Desktop::processor = processor;
    }

    const string &getMotherBoard() const {
        return motherBoard;
    }

    void setMotherBoard(const string &motherBoard) {
        Desktop::motherBoard = motherBoard;
    }

    void  showSpecs(){
        cout<<"-------------------------------"<<endl;
        cout<<"Monitor "<< monitor<<endl;
        cout<<"KeyBoard "<< keyboard<<endl;
        cout<<"Mouse "<< mouse<<endl;
        cout<<"Speaker "<< speaker<<endl;
        cout<<"RAM "<< ram<<endl;
        cout<<"Processor "<<processor <<endl;
        cout<<"MotherBoard "<<motherBoard <<endl;

    }

};

#endif //BUILDER_DESKTOP_H
