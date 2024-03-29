// Player Class
#include "Player.h"
#include "../Items/Swords/StarterSword.h"
#include "../Items/Armor/StarterArmor.h"

// Player Constructor
Player::Player() {
    // Use default constructor to Load Character

}

Player::Player(std::string name) {
    srand(time(nullptr));
    // Constructor for new Player Generation
    this->name = name;

    // Starter Sword
    int randomNumber = rand() % 3 + 1;
    if (randomNumber == 1) {
        Item *starterSword1 = new StarterSword("Solar");
        playerInventory.push_back(starterSword1);
    } else if (randomNumber == 2) {
        Item *starterSword1 = new StarterSword("Arc");
        playerInventory.push_back(starterSword1);
    } else if (randomNumber == 3) {
        Item *starterSword1 = new StarterSword("Void");
        playerInventory.push_back(starterSword1);
    }

    // Starter Armor
    Item *starterArmor1 = new StarterArmor;
    playerInventory.push_back(starterArmor1);
}

// Player Actions
void Player::equipArmor(Armor *armor1) {
    totalHealth = armor1->getArmorHealth() + baseHealth;
    this->totalHealth = this->maxHealth;
}

void Player::equipSword(Sword *sword1) {
    totalDamage = sword1->getDamageAmount() + baseDamage;
}

void Player::attackEnemy(Enemies *enemy1, Sword *sword1) {
    if (enemy1->getShieldType() == sword1->getDamageType()) {
        std::cout << "Element Types Match! Damage is doubled!" << std::endl;
        std::cout << "The " << enemy1->getName() << " took this much damage: " << (sword1->getDamageAmount() * 2)
                  << std::endl;
        enemy1->setHealth(enemy1->getHealth() - (sword1->getDamageAmount() * 2));
    }
    enemy1->setHealth(enemy1->getHealth() - sword1->getDamageAmount());
}

void Player::usePotion() {
    for (int i = 0; i < playerInventory.size(); i++) {
        if (playerInventory[i]->getItemType() == "Potion") {
            totalHealth += dynamic_cast<Potion *>(playerInventory[i])->getHealthIncrease();
            playerInventory.erase(playerInventory.begin() + i);
            std::cout << "You have used a healing potion." << std::endl;
            return;
        }
    }
    std::cout << "You do not have a healing potion." << std::endl;
}

// Player Inventory Tools
void Player::addItem(Item *item) {
    if (playerInventory.size() + 1 > maxInventory) {
        std::cout << "You need to make some space in your Inventory." << std::endl;
        try { deleteItem(); }
        catch (std::logic_error) {
            std::cout << "**********************************************" << std::endl;
            std::cout << "Entered an incorrect digit. Please try again." << std::endl;
            std::cout << "**********************************************" << std::endl;
            deleteItem();
        }

    }
    playerInventory.push_back(item);
    std::cout << item->getName() << ": has been added to your inventory" << std::endl;
}

void Player::deleteItem() {
    int itemToDelete;
    easeOfUse e1;
    std::string answer;
    std::cout << "----------------------------------------------" << std::endl;
    for (int i = 0; i < playerInventory.size(); i++) {
        std::cout << i << ". " << playerInventory[i]->getName() << std::endl;
    }
    std::cout << "Delete an item (1," << playerInventory.size() << ") or Exit (9)";
    std::cin >> itemToDelete;
    if (itemToDelete == 9) { return; }
    else {
        std::cout << "Are you sure you want to delete: " << playerInventory[itemToDelete - 1]->getName() << std::endl;
        std::cout << "Enter Yes or No: ";
        std::cin >> answer;
        answer = e1.toLower(answer);
        if (answer == "no") {
            int getAnswer;
            std::cout << "Delete another Item (1) or Exit (9)";
            std::cin >> getAnswer;
            if (getAnswer == 9) { return; }
            else if (getAnswer == 1) { deleteItem(); }
        }
        if (answer == "yes") {
            std::cout << "You have deleted: " << playerInventory[itemToDelete - 1]->getName() << std::endl;
            playerInventory.erase(playerInventory.begin() + itemToDelete - 1);
            std::cout << "----------------------------------------------" << std::endl;
            return;
        }
    }

}

void Player::listInventory() {
    int getItemNumber;
    int getAnswer;
    std::cout << "==============================================" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "             Players Inventory" << std::endl;
    std::cout << "Coins: " << getCoins() << std::endl;
    for (int i = 0; i < playerInventory.size(); i++) {
        std::cout << i + 1 << ". " << playerInventory[i]->getName() << std::endl;
    }
    std::cout << "Enter an Item (1-6) or Exit (9): ";
    std::cin >> getItemNumber;
    if (getItemNumber == 6 || getItemNumber == 5 || getItemNumber == 3 || getItemNumber == 2 || getItemNumber == 1) {
        if (playerInventory[getItemNumber - 1]->getItemType() == "Sword") {
            std::cout << "-" << std::endl;
            std::cout << playerInventory[getItemNumber - 1]->getName() << " > " << std::endl;
            std::cout << "Damage Amount: "
                      << dynamic_cast<Sword *>(playerInventory[getItemNumber - 1])->getDamageAmount() << std::endl;
            std::cout << "Damage Type: " << dynamic_cast<Sword *>(playerInventory[getItemNumber - 1])->getDamageType()
                      << std::endl;
            std::cout << "-" << std::endl;

            std::cout << "View Another Item (1) or Exit (9)";
            std::cin >> getAnswer;
            if (getAnswer == 9) { return; }
            else if (getAnswer == 1) { listInventory(); }
        } else if (playerInventory[getItemNumber - 1]->getItemType() == "Armor") {
            std::cout << "-" << std::endl;
            std::cout << playerInventory[getItemNumber - 1]->getName() << " > " << std::endl;
            std::cout << "Armor Health: " << dynamic_cast<Armor *>(playerInventory[getItemNumber - 1])->getArmorHealth()
                      << std::endl;
            std::cout << "-" << std::endl;

            std::cout << "View Another Item (1) or Exit (9):";
            std::cin >> getAnswer;
            if (getAnswer == 9) { return; }
            else if (getAnswer == 1) { listInventory(); }
        } else if (playerInventory[getItemNumber - 1]->getItemType() == "Potion") {
            std::cout << "-" << std::endl;
            std::cout << playerInventory[getItemNumber - 1]->getName() << " > " << std::endl;
            std::cout << "Healing Amount: "
                      << dynamic_cast<Potion *>(playerInventory[getItemNumber - 1])->getHealthIncrease() << std::endl;
            std::cout << "-" << std::endl;

            std::cout << "View Another Item (1) or Exit (9):";
            std::cin >> getAnswer;
            if (getAnswer == 9) { return; }
            else if (getAnswer == 1) { listInventory(); }
        }

    } else { return; }


}

void Player::addCoins(int coinAmount) {
    this->coins += coinAmount;
}

void Player::removeCoins(int cost) {
    this->coins -= cost;
}

// Getter and Setters
std::vector<Item *> &Player::getPlayerInventory() {
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






