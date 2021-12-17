//
// Created by James Miller on 12/16/21.
//

#ifndef CST210FINAL_KNIGHT_H
#define CST210FINAL_KNIGHT_H


#include "Enemies.h"

class Knight : public Enemies {
public:
    // Constructor to create Knight
    Knight(std::string name, std::string shieldType, int health);

    // Enemies Override Methods
    std::string getName() override;
    void setName(std::string name) override;
    std::string getShieldType() override;
    int getAttackDamage() override;
    void setAttackDamage(int attackDamage) override;
    int getHealth() override;
    void setHealth(int health) override;
};


#endif //CST210FINAL_KNIGHT_H
