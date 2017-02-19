//
// Created by Explo on 2/18/2017.
//

#include <algorithm>
#include <iostream>
#include "DockManager.h"

DockManager::DockManager(int numDocks, std::vector<Ship> mainDock) {
    this->mainDock = Dock(mainDock);
    this->numDocks = numDocks;
}

void DockManager::distribute() {
    for (int i = 0; i < numDocks; i++) {
        docks.push_back(Dock());
    }

    mainDock.sortDock();

    // sort from descending order
    // insert into largest array without becoming largest
    // otherwise insert into smallest array
    int largest = 0;

    for (unsigned i = 0; i < mainDock.getSize(); i++) {
        Dock& targetDock = getMostFittingDock(mainDock.getShip(i).getRepairTime(), largest);
        targetDock.addShip(mainDock.getShip(i));
        sortDocks();
        largest = getLargestDock().getSize();
    }
}

void DockManager::print() {
    for (int i = 0; i < numDocks; i++) {
        std::cout << "Dock " << i + 1 << std::endl;
        docks.at(i).printDock();
        std::cout << "End of Dock " << i + 1 << std::endl;
    }
}

void DockManager::sortDocks() {
    //descending order
    std::sort(docks.rbegin(), docks.rend(),[](const Dock& lhs, const Dock& rhs) {
        return lhs.getTimeSum() < rhs.getTimeSum();
    });
}

Dock &DockManager::getMostFittingDock(int nextSize, int largest) {
    for (int i = 0; i < docks.size(); i++) {
        if (largest == 0) {
            return docks.at(i);
        }

        if (largest > docks.at(i).getTimeSum() + nextSize) {
            return docks.at(i);
        }
    }

    return getSmallestDock();
}

Dock &DockManager::getSmallestDock() {
    return docks.at(docks.size() - 1);
}

Dock &DockManager::getLargestDock() {
    return docks.at(0);
}

