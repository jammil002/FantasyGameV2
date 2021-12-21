//

#include "Knight.h"

// Constructor to create the Knight
Knight::Knight(std::string name, std::string shieldType, int health, int attackDamage) {
    this->name = name;
    this->attackDamage = attackDamage;
    this->shieldType = shieldType;
    this->health = health;
}

// Override Methods
std::string Knight::getName() {
    return this->name;
}

void Knight::setName(std::string name) {
    this->name = name;
}

std::string Knight::getShieldType() {
    return this->shieldType;
}

int Knight::getAttackDamage() {
    return this->attackDamage;
}

void Knight::setAttackDamage(int attackDamage) {
    this->attackDamage = attackDamage;
}

int Knight::getHealth() {
    return this->health;
}

void Knight::setHealth(int health) {
    this->health = health;
}





