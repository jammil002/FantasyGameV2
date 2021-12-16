//
// Created by James Miller on 12/15/21.
//

#include "Player.h"

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

const int Player::getBaseDamage() const {
    return baseDamage;
}

int Player::getTotalDamage() const {
    return totalDamage;
}

