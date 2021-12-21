//
// Created by James Miller on 12/18/21.
//

#include "Ogre.h"

// Constructor to create the Ogre
Ogre::Ogre(std::string name, std::string shieldType, int health, int attackDamage) {
    this->name = name;
    this->attackDamage = attackDamage;
    this->shieldType = shieldType;
    this->health = health;
}

// Override Methods
std::string Ogre::getName() {
    return this->name;
}

void Ogre::setName(std::string name) {
    this->name = name;
}

std::string Ogre::getShieldType() {
    return this->shieldType;
}

int Ogre::getAttackDamage() {
    return this->attackDamage;
}

void Ogre::setAttackDamage(int attackDamage) {
    this->attackDamage = attackDamage;
}

int Ogre::getHealth() {
    return this->health;
}

void Ogre::setHealth(int health) {
    this->health = health;
}