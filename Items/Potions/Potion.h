//
// Created by James Miller on 12/15/21.
//

#ifndef CST210FINAL_POTION_H
#define CST210FINAL_POTION_H


#include "../Item.h"

class Potion : public Item{
protected:
    int damageIncrease;
    int healthIncrease;
    std::string potionType;
public:
    // Override Item Class Methods
    ~Potion() override;
    std::string &getName() override;
    void setName(std::string &getName) override;
    int getCost() override;
    void setCost(int cost) override;
    std::string getItemType() override;

    // Potion Virtual Functions
    virtual int getDamageIncrease() = 0;
    virtual int getHealthIncrease() = 0;
    virtual std::string &getPotionType() = 0;
};


#endif //CST210FINAL_POTION_H
