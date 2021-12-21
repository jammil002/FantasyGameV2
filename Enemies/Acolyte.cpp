//
// Created by James Miller on 12/18/21.
//

#include "Acolyte.h"

// Constructor to create the Acolyte
Acolyte::Acolyte(std::string name, std::string shieldType, int health, int attackDamage) {
    this->name = name;
    this->shieldType = shieldType;
    this->attackDamage = attackDamage;
    this->health = health;
}

// Override Methods
std::string Acolyte::getName() {
    return this->name;
}

void Acolyte::setName(std::string name) {
    this->name = name;
}

std::string Acolyte::getShieldType() {
    return this->shieldType;
}

int Acolyte::getAttackDamage() {
    return this->attackDamage;
}

void Acolyte::setAttackDamage(int attackDamage) {
    this->attackDamage = attackDamage;
}

int Acolyte::getHealth() {
    return this->health;
}

void Acolyte::setHealth(int health) {
    this->health = health;
}