//
// Created by James Miller on 12/17/21.
//

#include "CommonArmor.h"
// Constructor
CommonArmor::CommonArmor() {
    this->name = "Common Armor";
    this->itemType = "Armor";
    this->armorHealth = 20;
    this->cost = 20;
}

// Override Methods
std::string CommonArmor::getName() {
    return this->name;
}
void CommonArmor::setName(std::string getName) {
    this->name = name;
}
int CommonArmor::getCost() {
    return this->cost;
}
void CommonArmor::setCost(int cost) {
    this->cost = cost;
}
std::string CommonArmor::getItemType() {
    return this->itemType;
}
int CommonArmor::getArmorHealth() {
    return this->armorHealth;
}