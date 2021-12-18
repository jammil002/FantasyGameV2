// Drive Class for Game
#include "Driver.h"
#include "../Locations/Shop.h"

// Driver Constructor: simply calls startMenu method.
Driver::Driver() {
    try{
        startMenu();
    }
    catch(std::exception){
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
    if(getInput == 1){
        createCharacter();
    }
    else if(getInput == 2){
        loadGame();
    }
}

// Game Menu
void Driver::gameMenu() {

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
    std::cout << "==============================================" << std::endl;

    playerStorage.emplace_back(getName);
}
bool Driver::saveGame() {
    return false;
}

bool Driver::loadGame() {
    return false;
}

// Getters and Setters
std::vector<Player> &Driver::getPlayerStorage(){
    return this->playerStorage;
}










