#include <iostream>
#include "logger.h"
#include <thread>
using namespace std;

void user1Logs(){
    Logger *logger1 = Logger::getLoggger();
    logger1->Log("This is logger 1");
}

void user2Logs(){
    Logger *logger2 = Logger::getLoggger();
    logger2->Log("This is logger 2");
}

int main() {

    thread t1(user1Logs);

    thread t2(user2Logs);

    t1.join();
    t2.join();
    return 0;
}
