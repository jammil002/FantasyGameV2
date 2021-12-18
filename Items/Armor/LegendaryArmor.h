//
// Created by James Miller on 12/17/21.
//

#ifndef CST210FINAL_LEGENDARYARMOR_H
#define CST210FINAL_LEGENDARYARMOR_H
#include "Armor.h"

class LegendaryArmor : public Armor {
public:
    // Common Armor
    LegendaryArmor();

    // Override Methods
    std::string getName() override;
    void setName(std::string getName) override;
    int getCost() override;
    void setCost(int cost) override;
    std::string getItemType() override;
    int getArmorHealth() override;
};


#endif //CST210FINAL_LEGENDARYARMOR_H
