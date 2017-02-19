//
// Created by Explo on 2/18/2017.
//

#ifndef KCREPAIR2_DOCK_H
#define KCREPAIR2_DOCK_H

#include <vector>
#include "Ship.h"

class Dock {
private:
    std::vector<Ship> dock;
    int timeSum;
public:
    int getTimeSum() const;
    Dock();
    Dock(const std::vector<Ship> &dock);
    void printDock() const;
    void sortDock();
    void addShip(Ship ship);
    Ship getShip(int index) const;
    int getSize() const;
};

#endif //KCREPAIR2_DOCK_H
