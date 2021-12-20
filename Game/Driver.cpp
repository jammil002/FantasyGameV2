// Drive Class for Game
#include "Driver.h"
#include "../Locations/Shop.h"
#include "../Locations/Arena.h"

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
    newFile.open("saveFile.txt", std::ios::trunc | std::ios::in | std::ios::out);
    newFile << playerStorage[0].getName() << playerStorage[0].getCoins();
    for (int i = 0; i < playerStorage[0].getPlayerInventory().size(); i++) {
        if (playerStorage[0].getPlayerInventory().at(i)->getItemType() == "Sword") {
            newFile << playerStorage[0].getPlayerInventory().at(i)->getName() << "\n";
            newFile << dynamic_cast<Sword *>(playerStorage[0].getPlayerInventory().at(i))->getDamageType();
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
    int playerNumber = 1;
    int tempNum;
    int playerPart = 0;
    int loopAmount = 0;

    if (readSave.is_open()) {
        while (getline(readSave, tempString)) {
            std::cout << playerNumber << ". " << tempString << '\n';
            playerNumber++;
        }
        //myfile.close();
    }
    std::cout << "Enter the number of the player you would like to load: ";
    std::cin >> tempNum;
    if (readSave.is_open()) {
        while (getline(readSave, tempString)) {
            if (tempNum - 1 == loopAmount) {
                for (int i = 0; i < tempString.size(); i++) {
                    if (tempString == "\t") {

                    }

                }

            }

        }
        //myfile.close();
    }


    std::cout << "----------------------------------------------" << std::endl;
    return true;
}

// Getters and Setters
std::vector<Player> &Driver::getPlayerStorage() {
    return this->playerStorage;
}










