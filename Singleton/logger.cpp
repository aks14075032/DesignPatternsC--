//
// Created by Apli.ai on 13/07/22.
//

#include<iostream>
#include<string>
#include "logger.h"
using namespace std;
int Logger::counter=0;
Logger *Logger :: loggerInstance = nullptr;
mutex Logger::mtx;

Logger::Logger() {
    counter += 1;
    cout<<"New Instance Created Instance Count "<<counter<<endl;
}

void Logger::Log(string msg) {
    cout<<msg<<endl;
}

Logger *Logger::getLoggger() {

    if(loggerInstance == nullptr) {
        mtx.lock();
        if (loggerInstance == nullptr) {
            loggerInstance = new Logger();
        }
        mtx.unlock();
    }
    return loggerInstance;
}
