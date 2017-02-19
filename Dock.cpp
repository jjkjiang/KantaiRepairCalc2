//
// Created by Explo on 2/18/2017.
//

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include "Dock.h"

void Dock::printDock() const {
    for (const Ship& ship : dock) {
        ship.printShip();
    }
    std::cout << "Total time: " << timeSum << std::endl;
}

void Dock::sortDock() {
    std::sort(dock.rbegin(), dock.rend(), [](const Ship& lhs, const Ship& rhs) {
        return lhs.getRepairTime() < rhs.getRepairTime();
    });
}

void Dock::addShip(Ship ship) {
    dock.push_back(ship);
    timeSum += ship.getRepairTime();
}

Ship Dock::getShip(int index) const {
    if (index >= dock.size() || index < 0) {
        throw std::runtime_error("asked for invalid index");
    }

    return dock.at(index);
}

int Dock::getSize() const {
    return dock.size();
}

Dock::Dock() {
    timeSum = 0;
}


Dock::Dock(const std::vector<Ship> &dock) : dock(dock) {}

int Dock::getTimeSum() const {
    return timeSum;
}