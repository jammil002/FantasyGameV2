//
// Created by James Miller on 12/18/21.
//

#ifndef CST210FINAL_WIZARD_H
#define CST210FINAL_WIZARD_H


#include "Enemies.h"

class Wizard : public Enemies {
public:
    // Constructor to create Wizard
    Wizard(std::string name, std::string shieldType, int health, int attackDamage);

    // Enemies Override Methods
    std::string getName() override;

    void setName(std::string name) override;

    std::string getShieldType() override;

    int getAttackDamage() override;

    void setAttackDamage(int attackDamage) override;

    int getHealth() override;

    void setHealth(int health) override;
};


#endif //CST210FINAL_WIZARD_H
