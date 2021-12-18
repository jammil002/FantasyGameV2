// Starter Sword
#include "StarterSword.h"

// Constructor and Destructor for Starter Sword
StarterSword::StarterSword(std::string damageType){
    this->name = "Starter Sword";
    this->cost = 10;
    this->damageType = damageType;
    this->damageAmount = 5;
    this->itemType = "Sword";
}

// Item Override Methods
std::string StarterSword::getName() {
    return this->name;
}
void StarterSword::setName(std::string getName) {
    this->name = name;
}
int StarterSword::getCost() {
    return this->cost;
}
void StarterSword::setCost(int cost) {
    this->cost = cost;
}
std::string StarterSword::getItemType() {
    return this->itemType;
}

// Sword Override Methods
std::string StarterSword::getDamageType() {
    return this->damageType;
}
void StarterSword::setDamageType(std::string damageType) {
    this->damageType = damageType;
}
int StarterSword::getDamageAmount() {
    return this->damageAmount;
}
