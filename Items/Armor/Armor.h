//
// Created by James Miller on 12/15/21.
//

#ifndef CST210FINAL_ARMOR_H
#define CST210FINAL_ARMOR_H


#include "../Item.h"

class Armor : public Item{
protected:
    int armorHealth;
public:
    // Override Item Class Methods
    std::string &getName() override;
    void setName(std::string &getName) override;
    int getCost() override;
    void setCost(int cost) override;
    std::string getItemType() override;

    // Armor Virtual Functions
    virtual int getArmorHealth() = 0;
};


#endif //CST210FINAL_ARMOR_H
