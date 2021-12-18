//
// Created by James Miller on 12/17/21.
//

#include "ExoticArmor.h"
// Constructor
ExoticArmor::ExoticArmor() {
    this->name = "Exotic Armor";
    this->itemType = "Armor";
    this->armorHealth = 50;
    this->cost = 50;
}

// Override Methods
std::string ExoticArmor::getName() {
    return this->name;
}
void ExoticArmor::setName(std::string getName) {
    this->name = name;
}
int ExoticArmor::getCost() {
    return this->cost;
}
void ExoticArmor::setCost(int cost) {
    this->cost = cost;
}
std::string ExoticArmor::getItemType() {
    return this->itemType;
}
int ExoticArmor::getArmorHealth() {
    return this->armorHealth;
}