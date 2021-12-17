//
// Created by James Miller on 12/15/21.
//

#ifndef CST210FINAL_ENEMIES_H
#define CST210FINAL_ENEMIES_H

#include <string>


class Enemies {
protected:
    std::string name ;
    std::string shieldType;
    int attackDamage;
    int health;
public:
    virtual ~Enemies() {};
    virtual std::string getName() = 0;
    virtual void setName(std::string name) = 0;
    virtual std::string getShieldType() = 0;
    virtual int getAttackDamage() = 0;
    virtual void setAttackDamage(int attackDamage) = 0;
    virtual int getHealth()= 0;
    virtual void setHealth(int health) = 0;
};


#endif //CST210FINAL_ENEMIES_H
