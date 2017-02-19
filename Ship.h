//
// Created by Explo on 2/18/2017.
//

#ifndef KCREPAIR2_SHIP_H
#define KCREPAIR2_SHIP_H

#include<string>

class Ship {
private:
    int repairTime;
    std::string name;
public:
    // set akashi based on repair time
    Ship(int, std::string);

    int getRepairTime() const;

    void setRepairTime(int repairTime);

    const std::string &getName() const;

    void setName(const std::string &name);

    void printShip() const;
};

#endif //KCREPAIR2_SHIP_H
