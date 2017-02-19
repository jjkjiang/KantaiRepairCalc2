//
// Created by Explo on 2/18/2017.
//

#include <iostream>
#include "Ship.h"

Ship::Ship(int repairTime, std::string name) {
    this->repairTime = repairTime;
    this->name = name;
}

int Ship::getRepairTime() const {
    return repairTime;
}

void Ship::setRepairTime(int repairTime) {
    Ship::repairTime = repairTime;
}

const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &Ship::getName() const {
    return name;
}

void Ship::setName(const std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &name) {
    Ship::name = name;
}

void Ship::printShip() const {
    int repairConversion = repairTime;
    int hours, minutes, seconds;
    std::cout << name << ": ";

    seconds = repairConversion  % 60;
    repairConversion /= 60;
    minutes = repairConversion % 60;
    repairConversion /= 60;
    hours = repairConversion;

    std::cout << hours << ":";
    if (minutes < 10)
        std::cout << 0;
    std::cout << minutes << ":";
    if (seconds < 10)
        std::cout << 0;
    std::cout << seconds << std::endl;
}
