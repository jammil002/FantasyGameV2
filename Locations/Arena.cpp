//
// Created by James Miller on 12/15/21.
//

#include "Arena.h"


// Arena Menu
void Arena::arenaMenu(Player &p1) {
    int tempChoice;
    int armorAmount = 0;
    int armorNumber = 0;
    int swordNumber = 0;
    int swordAmount = 0;
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
            for (int i = 0; i < p1.getPlayerInventory().size(); i++) {
                if (p1.getPlayerInventory()[i]->getItemType() == "Armor") {
                    armorAmount++;
                }
            }
            if (armorAmount <= 1) {
                for (int i = 0; i < p1.getPlayerInventory().size(); i++) {
                    if (p1.getPlayerInventory()[i]->getItemType() == "Armor") {
                        p1.equipArmor(dynamic_cast<Armor *>(p1.getPlayerInventory()[i]));
                        std::cout << "Armor equipped!" << std::endl;
                    }
                }
            } else {
                for (int i = 0; i < p1.getPlayerInventory().size(); i++) {
                    if (p1.getPlayerInventory()[i]->getItemType() == "Armor") {
                        std::cout << i << ". " << p1.getPlayerInventory()[i]->getName();
                    }
                    std::cout << "Enter the number of the armor you want to equip: ";
                    std::cin >> armorNumber;
                    for (int i = 0; i < p1.getPlayerInventory().size(); i++) {
                        int armorChoice = 1;
                        if (p1.getPlayerInventory()[i]->getItemType() == "Armor") {
                            if (armorNumber == armorChoice) {
                                p1.equipArmor(dynamic_cast<Armor *>(p1.getPlayerInventory()[i]));
                                std::cout << "Armor equipped!" << std::endl;
                                break;
                            }
                            armorChoice++;
                        }
                    }
                }
            }
            std::cout << "Get ready to fight..." << std::endl;
            for (int i = 0; i < 11; i++) {
                std::cout << "----------------------------------------------" << std::endl;
                enemyStorage.push_back(generateEnemy());
                std::cout << "You are fighting a " << enemyStorage[0]->getName() << "." << std::endl;
                std::cout << "Health: " << enemyStorage[0]->getHealth() << " | " << "Damage: "
                          << enemyStorage[0]->getAttackDamage() << std::endl;
                std::cout << "Shield: " << enemyStorage[0]->getShieldType() << " | " << std::endl;
                std::cout << "-" << std::endl;
                while (enemyStorage[0]->getHealth() > 0 || p1.getTotalHealth() > 0) {
                    std::cout << "1. Attack" << std::endl;
                    std::cout << "2. Use Potion" << std::endl;
                    std::cout << "3. Flee" << std::endl;
                    std::cout << "-" << std::endl;
                    std::cin >> tempChoice;
                    if (tempChoice == 1) {
                        for (int i = 0; i < p1.getPlayerInventory().size(); i++) {
                            if (p1.getPlayerInventory()[i]->getItemType() == "Sword") {
                                swordAmount++;
                            }
                        }
                        if (swordAmount <= 1) {
                            for (int i = 0; i < p1.getPlayerInventory().size(); i++) {
                                if (p1.getPlayerInventory()[i]->getItemType() == "Sword") {
                                    p1.attackEnemy(enemyStorage[0], (Sword *) p1.getPlayerInventory()[i]);
                                }
                            }
                        } else {
                            for (int i = 0; i < p1.getPlayerInventory().size(); i++) {
                                if (p1.getPlayerInventory()[i]->getItemType() == "Sword") {
                                    std::cout << i << ". " << p1.getPlayerInventory()[i]->getName();
                                }
                                std::cout << "Enter which sword you would like to attack with: ";
                                std::cin >> swordNumber;
                                for (int i = 0; i < p1.getPlayerInventory().size(); i++) {
                                    int swordChoice = 1;
                                    if (p1.getPlayerInventory()[i]->getItemType() == "Sword") {
                                        if (swordChoice == swordAmount) {
                                            p1.attackEnemy(enemyStorage[0], (Sword *) p1.getPlayerInventory()[i]);
                                            std::cout << "Sword equipped!" << std::endl;
                                            break;
                                        }
                                        swordAmount++;
                                    }
                                }
                            }
                        }
                        std::cout << "Enemy Health: " << enemyStorage[0]->getHealth() << std::endl;
                        std::cout << "-" << std::endl;
                    }
                }


                waveAmount++;
                i++;

            }

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
            Enemies *acolyte1 = new Acolyte("Acolyte", "Solar", 7 * waveAmount, 3 * waveAmount);
            return acolyte1;
        }
        if (randomShield == 2) {
            Enemies *acolyte1 = new Acolyte("Acolyte", "Arc", 7 * waveAmount, 3 * waveAmount);
            return acolyte1;
        }
        if (randomShield == 3) {
            Enemies *acolyte1 = new Acolyte("Acolyte", "Void", 7 * waveAmount, 3 * waveAmount);
            return acolyte1;
        }
    }
    if (randomEnemy == 2) {
        unsigned int randomShield = rand() % 3 + 1;
        if (randomShield == 1) {
            Enemies *knight1 = new Knight("Knight", "Solar", 7 * waveAmount, 3 * waveAmount);
            return knight1;
        }
        if (randomShield == 2) {
            Enemies *knight1 = new Knight("Knight", "Arc", 7 * waveAmount, 3 * waveAmount);
            return knight1;
        }
        if (randomShield == 3) {
            Enemies *knight1 = new Knight("Knight", "Void", 7 * waveAmount, 3 * waveAmount);
            return knight1;
        }
    }
    if (randomEnemy == 3) {
        unsigned int randomShield = rand() % 3 + 1;
        if (randomShield == 1) {
            Enemies *ogre1 = new Ogre("Ogre", "Solar", 7 * waveAmount, 3 * waveAmount);
            return ogre1;
        }
        if (randomShield == 2) {
            Enemies *ogre1 = new Ogre("Ogre", "Arc", 7 * waveAmount, 3 * waveAmount);
            return ogre1;
        }
        if (randomShield == 3) {
            Enemies *ogre1 = new Ogre("Ogre", "Void", 7 * waveAmount, 3 * waveAmount);
            return ogre1;
        }
    }
    if (randomEnemy == 4) {
        unsigned int randomShield = rand() % 3 + 1;
        if (randomShield == 1) {
            Enemies *wizard1 = new Wizard("Wizard", "Solar", 7 * waveAmount, 3 * waveAmount);
            return wizard1;
        }
        if (randomShield == 2) {
            Enemies *wizard1 = new Wizard("Wizard", "Arc", 7 * waveAmount, 3 * waveAmount);
            return wizard1;
        }
        if (randomShield == 3) {
            Enemies *wizard1 = new Wizard("Wizard", "Void", 7 * waveAmount, 3 * waveAmount);
            return wizard1;
        }
    }
    if (randomEnemy == 5) {
        unsigned int randomShield = rand() % 3 + 1;
        if (randomShield == 1) {
            Enemies *thrall1 = new Thrall("Thrall", "Solar", 7 * waveAmount, 3 * waveAmount);
            return thrall1;
        }
        if (randomShield == 2) {
            Enemies *thrall1 = new Thrall("Thrall", "Arc", 7 * waveAmount, 3 * waveAmount);
            return thrall1;
        }
        if (randomShield == 3) {
            Enemies *thrall1 = new Thrall("Thrall", "Void", 7 * waveAmount, 3 * waveAmount);
            return thrall1;
        }
    }
}
