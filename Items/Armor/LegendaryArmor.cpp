// Legendary Armor

#include "LegendaryArmor.h"
// Constructor
LegendaryArmor::LegendaryArmor() {
    this->name = "Legendary Armor";
    this->itemType = "Armor";
    this->armorHealth = 30;
    this->cost = 30;
}

// Override Methods
std::string LegendaryArmor::getName() {
    return this->name;
}
void LegendaryArmor::setName(std::string getName) {
    this->name = name;
}
int LegendaryArmor::getCost() {
    return this->cost;
}
void LegendaryArmor::setCost(int cost) {
    this->cost = cost;
}
std::string LegendaryArmor::getItemType() {
    return this->itemType;
}
int LegendaryArmor::getArmorHealth() {
    return this->armorHealth;
}