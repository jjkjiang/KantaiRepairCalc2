#include <iostream>
#include "Ship.h"
#include "Dock.h"
#include "DockManager.h"

int main() {
    int testNumber = 20;
    int numDocks = 3;
    std::vector<Ship> shipList;
    char nameCounter = 'a';

    for (int i = 0; i < testNumber; i++) {
        shipList.push_back(Ship(rand() % 10000 + 1 , "test"));
    }

    DockManager test(numDocks, shipList);
    test.distribute();
    test.print();

    return 0;
}