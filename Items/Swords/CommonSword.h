//
// Created by James Miller on 12/17/21.
//

#ifndef CST210FINAL_COMMONSWORD_H
#define CST210FINAL_COMMONSWORD_H
#include "Sword.h"

class CommonSword : public Sword{
public:
    // Constructor and Destructor for Common Sword
    CommonSword(std::string damageType);

    // Item Override Methods
    std::string getName() override;
    void setName(std::string getName) override;
    int getCost() override;
    void setCost(int cost) override;
    std::string getItemType() override;

    // Sword Override Methods
    std::string getDamageType() override;
    void setDamageType(std::string damageType) override;
    int getDamageAmount() override;
};


#endif //CST210FINAL_COMMONSWORD_H
