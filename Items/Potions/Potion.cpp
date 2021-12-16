// Override Item Methods for Potion
#include "Potion.h"

Potion::~Potion() {

}
std::string &Potion::getName() {
    return this->name;
}

void Potion::setName(std::string &getName) {
    this->name = name;
}

int Potion::getCost() {
    return this->cost;
}

void Potion::setCost(int cost) {
    this->cost = cost;
}
std::string Potion::getItemType() {
    return this->itemType;
}

