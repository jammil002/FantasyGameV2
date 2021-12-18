//
// Created by James Miller on 12/17/21.
//

#include "StarterArmor.h"
// Constructor
StarterArmor::StarterArmor() {
    this->name = "Starter Armor";
    this->itemType = "Armor";
    this->armorHealth = 10;
    this->cost = 10;
}

// Override Methods
std::string StarterArmor::getName() {
    return this->name;
}
void StarterArmor::setName(std::string getName) {
    this->name = name;
}
int StarterArmor::getCost() {
    return this->cost;
}
void StarterArmor::setCost(int cost) {
    this->cost = cost;
}
std::string StarterArmor::getItemType() {
    return this->itemType;
}
int StarterArmor::getArmorHealth() {
    return this->armorHealth;
}

