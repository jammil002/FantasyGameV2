//
// Created by James Miller on 12/17/21.
//

#include "LegendarySword.h"
// Constructor and Destructor for Legendary Sword
LegendarySword::LegendarySword(std::string damageType){
    this->name = "Legendary Sword";
    this->cost = 30;
    this->damageType = damageType;
    this->damageAmount = 15;
    this->itemType = "Sword";
}

// Item Override Methods
std::string LegendarySword::getName() {
    return this->name;
}
void LegendarySword::setName(std::string getName) {
    this->name = name;
}
int LegendarySword::getCost() {
    return this->cost;
}
void LegendarySword::setCost(int cost) {
    this->cost = cost;
}
std::string LegendarySword::getItemType() {
    return this->itemType;
}

// Sword Override Methods
std::string LegendarySword::getDamageType() {
    return this->damageType;
}
void LegendarySword::setDamageType(std::string damageType) {
    this->damageType = damageType;
}
int LegendarySword::getDamageAmount() {
    return this->damageAmount;
}