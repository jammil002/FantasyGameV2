//
// Created by James Miller on 12/15/21.
//

#include "Arena.h"


// Arena Menu
void Arena::arenaMenu(Player &p1) {
    int tempChoice;
    while (true) {
        std::cout << "==============================================" << std::endl;
        std::cout << "----------------------------------------------" << std::endl;
        std::cout << "                 The Arena" << std::endl;
        std::cout << "Welcome to the Arena..." << std::endl;
        std::cout << "1. Fight" << std::endl;
        std::cout << "2. Open Inventory" << std::endl;
        std::cout << "3. Leave" << std::endl;
        std::cout << "Enter your choice (1-3): ";
        std::cin >> tempChoice;
        if (tempChoice == 1) {

            break;
        } else if (tempChoice == 2) {
            p1.listInventory();

        } else if (tempChoice == 3) {
            std::cout << "Leaving the arena." << std::endl;
            return;
        }
    }
}

void Arena::giveCoins(Player &p1) {
    srand(time(0));
    int randCoin = rand() % 20 + 5;
    p1.addCoins(randCoin);
}

Enemies *Arena::generateEnemy() {
    srand(time(0));
    unsigned int randomEnemy = rand() % 6 + 1;

    if (randomEnemy == 1) {
        unsigned int randomShield = rand() % 3 + 1;
        if (randomShield == 1) {
            Enemies *acolyte1 = new Acolyte("Acolyte", "Solar", 7 * waveAmount);
            return acolyte1;
        }
        if (randomShield == 2) {
            Enemies *acolyte1 = new Acolyte("Acolyte", "Arc", 7 * waveAmount);
            return acolyte1;
        }
        if (randomShield == 3) {
            Enemies *acolyte1 = new Acolyte("Acolyte", "Void", 7 * waveAmount);
            return acolyte1;
        }
    }
    if (randomEnemy == 2) {
        unsigned int randomShield = rand() % 3 + 1;
        if (randomShield == 1) {
            Enemies *knight1 = new Knight("Knight", "Solar", 7 * waveAmount);
            return knight1;
        }
        if (randomShield == 2) {
            Enemies *knight1 = new Knight("Knight", "Arc", 7 * waveAmount);
            return knight1;
        }
        if (randomShield == 3) {
            Enemies *knight1 = new Knight("Knight", "Void", 7 * waveAmount);
            return knight1;
        }
    }
    if (randomEnemy == 3) {
        unsigned int randomShield = rand() % 3 + 1;
        if (randomShield == 1) {
            Enemies *ogre1 = new Ogre("Ogre", "Solar", 7 * waveAmount);
            return ogre1;
        }
        if (randomShield == 2) {
            Enemies *ogre1 = new Ogre("Ogre", "Arc", 7 * waveAmount);
            return ogre1;
        }
        if (randomShield == 3) {
            Enemies *ogre1 = new Ogre("Ogre", "Void", 7 * waveAmount);
            return ogre1;
        }
    }
    if (randomEnemy == 4) {
        unsigned int randomShield = rand() % 3 + 1;
        if (randomShield == 1) {
            Enemies *wizard1 = new Wizard("Wizard", "Solar", 7 * waveAmount);
            return wizard1;
        }
        if (randomShield == 2) {
            Enemies *wizard1 = new Wizard("Wizard", "Arc", 7 * waveAmount);
            return wizard1;
        }
        if (randomShield == 3) {
            Enemies *wizard1 = new Wizard("Wizard", "Void", 7 * waveAmount);
            return wizard1;
        }
    }
    if (randomEnemy == 5) {
        unsigned int randomShield = rand() % 3 + 1;
        if (randomShield == 1) {
            Enemies *thrall1 = new Thrall("Thrall", "Solar", 7 * waveAmount);
            return thrall1;
        }
        if (randomShield == 2) {
            Enemies *thrall1 = new Thrall("Thrall", "Arc", 7 * waveAmount);
            return thrall1;
        }
        if (randomShield == 3) {
            Enemies *thrall1 = new Thrall("Thrall", "Void", 7 * waveAmount);
            return thrall1;
        }
    }
}
