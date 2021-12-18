// Exotic Sword

#include "ExoticSword.h"

// Constructor and Destructor for Exotic Sword
ExoticSword::ExoticSword(std::string damageType){
    this->name = "Exotic Sword";
    this->cost = 50;
    this->damageType = damageType;
    this->damageAmount = 30;
    this->itemType = "Sword";
}

// Item Override Methods
std::string ExoticSword::getName() {
    return this->name;
}
void ExoticSword::setName(std::string getName) {
    this->name = name;
}
int ExoticSword::getCost() {
    return this->cost;
}
void ExoticSword::setCost(int cost) {
    this->cost = cost;
}
std::string ExoticSword::getItemType() {
    return this->itemType;
}

// Sword Override Methods
std::string ExoticSword::getDamageType() {
    return this->damageType;
}
void ExoticSword::setDamageType(std::string damageType) {
    this->damageType = damageType;
}
int ExoticSword::getDamageAmount() {
    return this->damageAmount;
}