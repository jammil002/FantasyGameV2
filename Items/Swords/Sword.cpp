// Override Item Methods
#include "Sword.h"

std::string &Sword::getName() {
    return this->name;
}
void Sword::setName(std::string &getName) {
    this->name = name;
}
int Sword::getCost() {
    return this->cost;
}
void Sword::setCost(int cost) {
    this->cost = cost;
}
std::string Sword::getItemType() {
    return this->itemType;
}


