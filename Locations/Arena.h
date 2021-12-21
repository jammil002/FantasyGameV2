//
// Created by James Miller on 12/15/21.
//

#ifndef CST210FINAL_ARENA_H
#define CST210FINAL_ARENA_H


#include "../Game/Player.h"
#include "../Enemies/Enemies.h"
#include "../Enemies/Acolyte.h"
#include "../Enemies/Knight.h"
#include "../Enemies/Ogre.h"
#include "../Enemies/Wizard.h"
#include "../Enemies/Thrall.h"
#include <ctime>
#include <cstdlib>

class Arena {
private:
    int waveAmount = 1;
    std::vector<Enemies *> enemyStorage;

    // Arena Tools
    Enemies *generateEnemy();

    void giveCoins(Player &p1);

public:
    // Arena Menu
    void arenaMenu(Player &p1);


};


#endif //CST210FINAL_ARENA_H
