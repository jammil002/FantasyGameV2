// Overridden Functions from Item Class
#include "Armor.h"

std::string &Armor::getName() {
    this->name;
}
void Armor::setName(std::string &getName) {
    this->name = name;
}
int Armor::getCost() {
    return this->cost;
}
void Armor::setCost(int cost) {
    this->cost = cost;
}
std::string Armor::getItemType() {
    return this->itemType;
}




