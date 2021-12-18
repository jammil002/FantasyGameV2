//
// Created by James Miller on 12/15/21.
//

#ifndef CST210FINAL_SWORD_H
#define CST210FINAL_SWORD_H


#include "../Item.h"
#include <string>

class Sword : public Item {
protected:
    std::string damageType;
    int damageAmount;
public:
    // Sword Virtual Functions
    virtual std::string getDamageType() = 0;
    virtual void setDamageType(std::string damageType) = 0;
    virtual int getDamageAmount() = 0;
};


#endif //CST210FINAL_SWORD_H
