#include <iostream>
#include <stdio.h>
#include "HPDesktop.h"
#include "DellDesktop.h"
#include "DesktopDirector.h"
using namespace std;
int main() {

    HPDesktopBuilder* hpDesktopBuilder = new HPDesktopBuilder();
    DellDesktopBuilder* dellDesktopBuilder = new DellDesktopBuilder();

    DesktopDirector* director1 = new DesktopDirector(hpDesktopBuilder);
    DesktopDirector* director2 = new DesktopDirector(dellDesktopBuilder);

    Desktop* desktop1 = director1->BuildDesktop();
    Desktop* desktop2 = director2->BuildDesktop();

    desktop1->showSpecs();
    desktop2->showSpecs();

    return 0;
}
