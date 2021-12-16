// Player Class
// Contains everything need regarding the player.

#ifndef CST210FINAL_PLAYER_H
#define CST210FINAL_PLAYER_H


#include <vector>
#include <string>
#include "Items/Item.h"
#include "Items/Armor/Armor.h"
#include "Items/Swords/Sword.h"
#include "Items/Potions/Potion.h"
#include "Enemies/Enemies.h"


class Player {
protected:
    // Inventory
    std::vector<Item*> playerInventory;
    int const maxInventory = 6;

    // Name and Coins
    std::string name;
    int coins = 10;

    // Player Health
    int const baseHealth = 10;
    int totalHealth;
    int maxHealth;

    // Player Damage
    int const baseDamage = 3;
    int totalDamage;
public:
    //Player Constructor
    Player(std::string name);

    // Player Actions
    void equipArmor(Armor*);
    void equipSword(Sword*);
    void usePotion(Potion*);
    void attackEnemy(Enemies*);
    // Equipped armor raises health from baseHealth = 10.
    // Equipped sword raises baseDamage from 3.
    // Potion raises health from current health to +5;

    // Player Inventory Tools
    const std::vector<Item *> &getPlayerInventory() const;
    void setPlayerInventory(const std::vector<Item *> &playerInventory);
    void getMaxInventory();
    void addItem(Item*);
    void deleteItem();

    // Health Tools
    int getBaseHealth() const;
    int getTotalHealth() const;
    int getMaxHealth() const;
    void setTotalHealth(int totalHealth);

    // Damage Tools
    int getBaseDamage() const;
    int getTotalDamage() const;

    // Getters and Setter for Name/Coins
    int getCoins() const;
    void setCoins(int coins);
    const std::string &getName() const;
    void setName(const std::string &name);

    // Coin Tools
    void addCoins();
    void removeCoins(Item*);
};


#endif //CST210FINAL_PLAYER_H
