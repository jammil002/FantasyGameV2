//
// Created by James Miller on 12/15/21.
//

#ifndef CST210FINAL_POTION_H
#define CST210FINAL_POTION_H


#include "../Item.h"

class Potion : public Item{
protected:
    int healthIncrease;
    std::string potionType;
public:
    // Potion Virtual Functions
    virtual int getHealthIncrease() = 0;
    virtual std::string getPotionType() = 0;
};


#endif //CST210FINAL_POTION_H
