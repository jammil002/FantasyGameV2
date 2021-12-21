// Drive Class for Game
#include <sstream>
#include "Driver.h"
#include "../Locations/Shop.h"
#include "../Locations/Arena.h"
#include "../Items/Armor/StarterArmor.h"
#include "../Items/Swords/StarterSword.h"
#include "../Items/Swords/ExoticSword.h"

// Driver Constructor: simply calls startMenu method.
Driver::Driver() {
    try {
        startMenu();
    }
    catch (std::exception) {
        std::cout << "**********************************************" << std::endl;
        std::cout << "Entered an incorrect digit. Please try again." << std::endl;
        std::cout << "**********************************************" << std::endl;
        startMenu();
    }

}

// Menu that launches when game loads.
void Driver::startMenu() {
    int getInput;
    std::cout << "==============================================" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Welcome to Final Fantasy 210!" << std::endl;
    std::cout << "Would you like to save or load a character?" << std::endl;
    std::cout << "1. New Character" << std::endl;
    std::cout << "2. Load Character" << std::endl;
    std::cout << "Enter a 1 or 2: ";
    std::cin >> getInput;
    if (getInput == 1) {
        createCharacter();
    } else if (getInput == 2) {
        loadGame();
    }
}

// Game Menu
void Driver::gameMenu() {
    int menuChoice;
    std::cout << "==============================================" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    if (playerStorage[0].getName().ends_with('s')) {
        std::cout << "                 " << playerStorage[0].getName() << "' Menu" << std::endl;
    } else {
        std::cout << "                 " << playerStorage[0].getName() << "'s Menu" << std::endl;
    }
    std::cout << "1. Open Inventory" << std::endl;
    std::cout << "2. Travel" << std::endl;
    std::cout << "3. Save" << std::endl;
    std::cout << "4. Quit" << std::endl;
    std::cout << "Enter your choice (1-4): ";
    std::cin >> menuChoice;
    switch (menuChoice) {
        case 1:
            std::cout << "Opening Inventory... " << std::endl;
            std::cout << "----------------------------------------------" << std::endl;
            playerStorage[0].listInventory();

            std::cout << "----------------------------------------------" << std::endl;
            gameMenu();
            break;
        case 2:
            std::cout << "----------------------------------------------" << std::endl;
            std::cout << "Where would you like to travel? " << std::endl;
            std::cout << "1. Arena" << std::endl;
            std::cout << "2. Shop" << std::endl;
            while (true) {
                std::cout << "Enter 1 or 2: ";
                std::cin >> menuChoice;
                if (menuChoice == 1) {
                    Arena a1;
                    a1.arenaMenu(playerStorage[0]);
                    gameMenu();
                    break;
                } else if (menuChoice == 2) {
                    Shop s1;
                    std::cout << "----------------------------------------------" << std::endl;
                    s1.shopMenu(playerStorage[0]);
                    gameMenu();
                    break;
                }
            }
            break;
        case 3:
            saveGame();
            break;
        case 4:
            std::cout << "Quiting " << std::endl;
            //quitGame();
            break;
        default:
            std::cout << "Please choose 1 - 4..." << std::endl;
            gameMenu();
            break;
    }
}

// Character Creation, Saving, and Loading Methods.
void Driver::createCharacter() {
    std::string getName;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Create your Hero..." << std::endl;
    std::cout << "Enter name: ";
    std::cin >> getName;
    std::cout << "Time to begin your journey!" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    playerStorage.emplace_back(getName);
    gameMenu();
}

bool Driver::saveGame() {
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "Saving the game...." << std::endl;
    newFile.open("saveFile.txt");
    newFile << playerStorage[0].getName() << "\n" << playerStorage[0].getCoins();
    for (int i = 0; i < playerStorage[0].getPlayerInventory().size(); i++) {
        if (playerStorage[0].getPlayerInventory().at(i)->getItemType() == "Sword") {
            newFile << "\n" << playerStorage[0].getPlayerInventory().at(i)->getName() << '\t'
                    << dynamic_cast<Sword *>(playerStorage[0].getPlayerInventory().at(i))->getDamageType();
        } else {
            newFile << "\n" << playerStorage[0].getPlayerInventory().at(i)->getName();
        }
        playerStorage[0].getPlayerInventory().at(i)->getName();
    }
    newFile << std::endl;
    newFile.close();
    std::cout << "----------------------------------------------" << std::endl;
    gameMenu();
    return true;
}

bool Driver::loadGame() {
    std::string tempString;
    int loopPlacement = 1;
    readSave.open("saveFile.txt");
    if (readSave.is_open()) {
        while (getline(readSave, tempString)) {
            if (loopPlacement == 1) {
                playerStorage.emplace_back();
                playerStorage[0].setName(tempString);
                loopPlacement++;
            } else if (loopPlacement == 2) {
                int coins = std::stoi(tempString);
                playerStorage[1].setCoins(coins);
                tempString = "";
                loopPlacement++;
            } else if (loopPlacement == 3) {
                bool itemAttributes = false;
                std::string itemName;
                std::string itemInformation;
                for (int i = 0; i < tempString.size(); i++) {
                    if (tempString[i] == '\t') {
                        itemAttributes = true;
                    }
                    if (!itemAttributes) {
                        itemName.push_back(tempString[i]);
                    } else {
                        itemInformation.push_back(tempString[i]);
                    }
                }
                if (itemName == "Starter Sword") {
                    Item *starterSword = new StarterSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(starterSword);
                } else if (itemName == "Common Sword") {
                    Item *commonSword = new CommonSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(commonSword);
                } else if (itemName == "Legendary Sword") {
                    Item *legendarySword = new LegendarySword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(legendarySword);
                } else if (itemName == "Exotic Sword") {
                    Item *exoticSword = new ExoticSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(exoticSword);
                } else if (itemName == "Starter Armor") {
                    Item *starterArmor = new StarterArmor;
                    playerStorage[0].getPlayerInventory().push_back(starterArmor);
                } else if (itemName == "Common Armor") {
                    Item *commonArmor = new CommonArmor;
                    playerStorage[0].getPlayerInventory().push_back(commonArmor);
                } else if (itemName == "Legendary Armor") {
                    Item *legendaryArmor = new LegendaryArmor;
                    playerStorage[0].getPlayerInventory().push_back(legendaryArmor);
                } else if (itemName == "Exotic Armor") {
                    Item *exoticArmor = new ExoticArmor;
                    playerStorage[0].getPlayerInventory().push_back(exoticArmor);
                } else if (itemName == "Healing Potion") {
                    Item *healingPotion = new HealingPotion;
                    playerStorage[0].getPlayerInventory().push_back(healingPotion);
                }
                loopPlacement++;
            } else if (loopPlacement == 4) {
                bool itemAttributes = false;
                std::string itemName;
                std::string itemInformation;
                for (int i = 0; i < tempString.size(); i++) {
                    if (tempString[i] == '\t') {
                        itemAttributes = true;
                    }
                    if (!itemAttributes) {
                        itemName.push_back(tempString[i]);
                    } else {
                        itemInformation.push_back(tempString[i]);
                    }
                }
                if (itemName == "Starter Sword") {
                    Item *starterSword = new StarterSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(starterSword);
                } else if (itemName == "Common Sword") {
                    Item *commonSword = new CommonSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(commonSword);
                } else if (itemName == "Legendary Sword") {
                    Item *legendarySword = new LegendarySword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(legendarySword);
                } else if (itemName == "Exotic Sword") {
                    Item *exoticSword = new ExoticSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(exoticSword);
                } else if (itemName == "Starter Armor") {
                    Item *starterArmor = new StarterArmor;
                    playerStorage[0].getPlayerInventory().push_back(starterArmor);
                } else if (itemName == "Common Armor") {
                    Item *commonArmor = new CommonArmor;
                    playerStorage[0].getPlayerInventory().push_back(commonArmor);
                } else if (itemName == "Legendary Armor") {
                    Item *legendaryArmor = new LegendaryArmor;
                    playerStorage[0].getPlayerInventory().push_back(legendaryArmor);
                } else if (itemName == "Exotic Armor") {
                    Item *exoticArmor = new ExoticArmor;
                    playerStorage[0].getPlayerInventory().push_back(exoticArmor);
                } else if (itemName == "Healing Potion") {
                    Item *healingPotion = new HealingPotion;
                    playerStorage[0].getPlayerInventory().push_back(healingPotion);
                }
                loopPlacement++;
            } else if (loopPlacement == 5) {
                bool itemAttributes = false;
                std::string itemName;
                std::string itemInformation;
                for (int i = 0; i < tempString.size(); i++) {
                    if (tempString[i] == '\t') {
                        itemAttributes = true;
                    }
                    if (!itemAttributes) {
                        itemName.push_back(tempString[i]);
                    } else {
                        itemInformation.push_back(tempString[i]);
                    }
                }
                if (itemName == "Starter Sword") {
                    Item *starterSword = new StarterSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(starterSword);
                } else if (itemName == "Common Sword") {
                    Item *commonSword = new CommonSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(commonSword);
                } else if (itemName == "Legendary Sword") {
                    Item *legendarySword = new LegendarySword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(legendarySword);
                } else if (itemName == "Exotic Sword") {
                    Item *exoticSword = new ExoticSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(exoticSword);
                } else if (itemName == "Starter Armor") {
                    Item *starterArmor = new StarterArmor;
                    playerStorage[0].getPlayerInventory().push_back(starterArmor);
                } else if (itemName == "Common Armor") {
                    Item *commonArmor = new CommonArmor;
                    playerStorage[0].getPlayerInventory().push_back(commonArmor);
                } else if (itemName == "Legendary Armor") {
                    Item *legendaryArmor = new LegendaryArmor;
                    playerStorage[0].getPlayerInventory().push_back(legendaryArmor);
                } else if (itemName == "Exotic Armor") {
                    Item *exoticArmor = new ExoticArmor;
                    playerStorage[0].getPlayerInventory().push_back(exoticArmor);
                } else if (itemName == "Healing Potion") {
                    Item *healingPotion = new HealingPotion;
                    playerStorage[0].getPlayerInventory().push_back(healingPotion);
                }
                loopPlacement++;
            } else if (loopPlacement == 6) {
                bool itemAttributes = false;
                std::string itemName;
                std::string itemInformation;
                for (int i = 0; i < tempString.size(); i++) {
                    if (tempString[i] == '\t') {
                        itemAttributes = true;
                    }
                    if (!itemAttributes) {
                        itemName.push_back(tempString[i]);
                    } else {
                        itemInformation.push_back(tempString[i]);
                    }
                }
                if (itemName == "Starter Sword") {
                    Item *starterSword = new StarterSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(starterSword);
                } else if (itemName == "Common Sword") {
                    Item *commonSword = new CommonSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(commonSword);
                } else if (itemName == "Legendary Sword") {
                    Item *legendarySword = new LegendarySword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(legendarySword);
                } else if (itemName == "Exotic Sword") {
                    Item *exoticSword = new ExoticSword(itemInformation);
                    playerStorage[0].getPlayerInventory().push_back(exoticSword);
                } else if (itemName == "Starter Armor") {
                    Item *starterArmor = new StarterArmor;
                    playerStorage[0].getPlayerInventory().push_back(starterArmor);
                } else if (itemName == "Common Armor") {
                    Item *commonArmor = new CommonArmor;
                    playerStorage[0].getPlayerInventory().push_back(commonArmor);
                } else if (itemName == "Legendary Armor") {
                    Item *legendaryArmor = new LegendaryArmor;
                    playerStorage[0].getPlayerInventory().push_back(legendaryArmor);
                } else if (itemName == "Exotic Armor") {
                    Item *exoticArmor = new ExoticArmor;
                    playerStorage[0].getPlayerInventory().push_back(exoticArmor);
                } else if (itemName == "Healing Potion") {
                    Item *healingPotion = new HealingPotion;
                    playerStorage[0].getPlayerInventory().push_back(healingPotion);
                }
                loopPlacement++;
            }
        }
    }

    gameMenu();
    return true;
}

// Getters and Setters
std::vector<Player> &Driver::getPlayerStorage() {
    return this->playerStorage;
}










