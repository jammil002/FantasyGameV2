//
// Created by James Miller on 12/18/21.
//

#ifndef CST210FINAL_OGRE_H
#define CST210FINAL_OGRE_H


#include "Enemies.h"

class Ogre : public Enemies {
public:
    // Constructor to create Wizard
    Ogre(std::string name, std::string shieldType, int health);

    // Enemies Override Methods
    std::string getName() override;

    void setName(std::string name) override;

    std::string getShieldType() override;

    int getAttackDamage() override;

    void setAttackDamage(int attackDamage) override;

    int getHealth() override;

    void setHealth(int health) override;
};


#endif //CST210FINAL_OGRE_H
