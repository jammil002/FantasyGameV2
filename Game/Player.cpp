// Player Class
#include "Player.h"

// Player Constructor
Player::Player() {
    // Use default constructor to Load Character

}
Player::Player(std::string name) {
    // Constructor for new Player Generation
    this->name = name;
    // Push back armor
    // Push back sword

    // Equip Sword
    // Equip Armor
}

// Player Actions
void Player::equipArmor(Armor *armor1) {
    totalHealth = armor1->getArmorHealth() + baseHealth;
    totalHealth = maxHealth;
}
void Player::equipSword(Sword *sword1) {
    totalDamage = sword1->getDamageAmount() + baseDamage;
}
void Player::attackEnemy(Enemies *enemy1, Sword *sword1) {
    if(enemy1->getShieldType() == sword1->getDamageType()){
        std::cout << "Element Types Match! Damage is doubled!" << std::endl;
        std::cout << "The " << enemy1->getName() << " took this much damage: " << (totalDamage * 2) << std::endl;
        enemy1->setHealth(enemy1->getHealth() - (totalDamage * 2));
    }
    enemy1->setHealth(enemy1->getHealth() - totalDamage);
}
void Player::usePotion() {
    int potionLocation;
    for(int i = 0; i < playerInventory.size(); i++){
        if(playerInventory[i]->getItemType() == "Potion"){
            std::cout << i << ". "<< playerInventory[i]->getName();
        }
    }
}

// Player Inventory Tools
void Player::addItem(Item *item) {
    if(playerInventory.size() + 1 > maxInventory ){
        std::cout << "You need to make some space in your Inventory." << std::endl;
        try{deleteItem();}
        catch(std::logic_error) {
            std::cout << "**********************************************" << std::endl;
            std::cout << "Entered an incorrect digit. Please try again." << std::endl;
            std::cout << "**********************************************" << std::endl;
            deleteItem();
        }

    }
    playerInventory.push_back(item);
}
void Player::deleteItem() {
    int itemToDelete;
    easeOfUse e1;
    std::string answer;
    for(int i = 0; i < playerInventory.size(); i++){
        std::cout << i << ". " << playerInventory[i]->getName() << std::endl;
    }
    std::cout << "Which item would you like to delete: ";
    std::cin >> itemToDelete;
    std::cout << "Are you sure you want to delete: " << playerInventory[itemToDelete-1]->getName() << std::endl;
    std::cout << "Enter Yes or No: ";
    std::cin >> answer;
    answer = e1.toLower(answer);
    if(answer == "no"){

    }
    if(answer == "yes")
}
void Player::addCoins(int coinAmount) {
    this->coins += coinAmount;
}
void Player::removeCoins(int cost) {
    this->coins -= cost;
}
void Player::listInventory() {

}

// Getter and Setters
const std::vector<Item *> &Player::getPlayerInventory() const {
    return playerInventory;
}
void Player::setPlayerInventory(const std::vector<Item *> &playerInventory) {
    Player::playerInventory = playerInventory;
}
const std::string &Player::getName() const {
    return name;
}
void Player::setName(const std::string &name) {
    Player::name = name;
}
int Player::getTotalHealth() const {
    return totalHealth;
}
void Player::setTotalHealth(int totalHealth) {
    Player::totalHealth = totalHealth;
}
int Player::getCoins() const {
    return coins;
}
void Player::setCoins(int coins) {
    Player::coins = coins;
}
int Player::getBaseHealth() const {
    return baseHealth;
}
int Player::getMaxHealth() const {
    return maxHealth;
}
int Player::getBaseDamage() const {
    return baseDamage;
}
int Player::getTotalDamage() const {
    return totalDamage;
}






