//
// Created by James Miller on 12/16/21.
//

#ifndef CST210FINAL_DRIVER_H
#define CST210FINAL_DRIVER_H

#include <vector>
#include <fstream>
#include <iostream>
#include "Player.h"


class Driver {
protected:
    // Vector that stores new and loaded players.
    std::vector<Player> playerStorage;

    // Save file and load file.
    std::fstream newFile;
    std::ifstream readSave;
public:
    // Driver Constructor
    Driver();

    // Getter for playerStoragev
    std::vector<Player> &getPlayerStorage();

    // Load Menu
    void startMenu();

    // Game Menu();
    void gameMenu();

    //Methods to create a character, save, and load.
    void createCharacter();

    bool saveGame();

    bool loadGame();
};


#endif //CST210FINAL_DRIVER_H
