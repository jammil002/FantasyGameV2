//
// Created by James Miller on 12/17/21.
//

#include "CommonSword.h"

// Constructor and Destructor for Common Sword
CommonSword::CommonSword(std::string damageType){
    this->name = "Common Sword";
    this->cost = 20;
    this->damageType = damageType;
    this->damageAmount = 10;
    this->itemType = "Sword";
}

// Item Override Methods
std::string CommonSword::getName() {
    return this->name;
}
void CommonSword::setName(std::string getName) {
    this->name = name;
}
int CommonSword::getCost() {
    return this->cost;
}
void CommonSword::setCost(int cost) {
    this->cost = cost;
}
std::string CommonSword::getItemType() {
    return this->itemType;
}

// Sword Override Methods
std::string CommonSword::getDamageType() {
    return this->damageType;
}
void CommonSword::setDamageType(std::string damageType) {
    this->damageType = damageType;
}
int CommonSword::getDamageAmount() {
    return this->damageAmount;
}