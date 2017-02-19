//
// Created by Explo on 2/18/2017.
//

#ifndef KCREPAIR2_DOCKMANAGER_H
#define KCREPAIR2_DOCKMANAGER_H


#include "Dock.h"

class DockManager {
private:
    int numDocks;
    Dock mainDock;
    std::vector<Dock> docks;

    Dock& getMostFittingDock(int nextSize, int largest);
    Dock& getSmallestDock();
    Dock& getLargestDock();
    void sortDocks();
public:
    DockManager(int numDocks, std::vector<Ship> mainDock);
    void distribute();
    void print();
};


#endif //KCREPAIR2_DOCKMANAGER_H
