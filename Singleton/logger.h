//
// Created by Apli.ai on 13/07/22.
//

#ifndef SINGLETON_LOGGER_H
#define SINGLETON_LOGGER_H

#include<iostream>
#include <mutex>
using namespace std;

class Logger{
    static int counter;
    Logger();
    Logger(const Logger&);
    Logger operator=(const Logger&);
    static Logger *loggerInstance;
    static mutex mtx;
public:
    static Logger *getLoggger();
    void Log(string msg);
};

#endif //SINGLETON_LOGGER_H
