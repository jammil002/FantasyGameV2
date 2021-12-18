//
// Created by James Miller on 12/17/21.
//

#ifndef CST210FINAL_HEALINGPOTION_H
#define CST210FINAL_HEALINGPOTION_H


#include "Potion.h"

class HealingPotion : public Potion{
public:
    HealingPotion();

    // Item Method Override
    std::string getName() override;
    void setName(std::string getName) override;
    int getCost() override;
    void setCost(int cost) override;
    std::string getItemType() override;

    // Potion Method Override
    int getHealthIncrease() override;
    std::string getPotionType() override;
};


#endif //CST210FINAL_HEALINGPOTION_H
