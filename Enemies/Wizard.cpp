//
// Created by James Miller on 12/18/21.
//

#include "Wizard.h"

// Constructor to create the Wizard
Wizard::Wizard(std::string name, std::string shieldType, int health, int attackDamage) {
    this->name = name;
    this->attackDamage = attackDamage;
    this->shieldType = shieldType;
    this->health = health;
}

// Override Methods
std::string Wizard::getName() {
    return this->name;
}

void Wizard::setName(std::string name) {
    this->name = name;
}

std::string Wizard::getShieldType() {
    return this->shieldType;
}

int Wizard::getAttackDamage() {
    return this->attackDamage;
}

void Wizard::setAttackDamage(int attackDamage) {
    this->attackDamage = attackDamage;
}

int Wizard::getHealth() {
    return this->health;
}

void Wizard::setHealth(int health) {
    this->health = health;
}