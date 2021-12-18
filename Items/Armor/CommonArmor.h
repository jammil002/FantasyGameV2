//
// Created by James Miller on 12/17/21.
//

#ifndef CST210FINAL_COMMONARMOR_H
#define CST210FINAL_COMMONARMOR_H


#include "Armor.h"

class CommonArmor : public Armor {
public:
    // Common Armor
    CommonArmor();

    // Override Methods
    std::string getName() override;
    void setName(std::string getName) override;
    int getCost() override;
    void setCost(int cost) override;
    std::string getItemType() override;
    int getArmorHealth() override;
};


#endif //CST210FINAL_COMMONARMOR_H
