//
// Created by James Miller on 12/18/21.
//

#include "Thrall.h"

// Constructor to create the Thrall
Thrall::Thrall(std::string name, std::string shieldType, int health) {
    this->name = name;
    this->shieldType = shieldType;
    this->health = health;
}

// Override Methods
std::string Thrall::getName() {
    return this->name;
}

void Thrall::setName(std::string name) {
    this->name = name;
}

std::string Thrall::getShieldType() {
    return this->shieldType;
}

int Thrall::getAttackDamage() {
    return this->attackDamage;
}

void Thrall::setAttackDamage(int attackDamage) {
    this->attackDamage = attackDamage;
}

int Thrall::getHealth() {
    return this->health;
}

void Thrall::setHealth(int health) {
    this->health = health;
}