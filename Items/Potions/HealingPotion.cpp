//
// Created by James Miller on 12/17/21.
//

#include "HealingPotion.h"
// Healing Potion Constructor
HealingPotion::HealingPotion() {
    this->name = name;
    this->cost = 10;
    this->itemType = "Potion";
    this->healthIncrease = 5;
    this->potionType = "Healing";
}

// Item Method Override
std::string HealingPotion::getName() {
    return this->name;
}
void HealingPotion::setName(std::string getName) {
    this->name = name;
}
int HealingPotion::getCost() {
    return this->cost;
}
void HealingPotion::setCost(int cost) {
    this->cost = cost;
}
std::string HealingPotion::getItemType() {
    return this->itemType;
}

// Potion Method Override
int HealingPotion::getHealthIncrease() {
    return healthIncrease;
}

std::string HealingPotion::getPotionType() {
    return this->potionType;
}




