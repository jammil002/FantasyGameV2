//
// Created by James Miller on 12/15/21.
//

#ifndef CST210FINAL_ARENA_H
#define CST210FINAL_ARENA_H


#include "../Game/Player.h"
#include "../Enemies/Enemies.h"

class Arena {
protected:
    int waveAmount;
public:
    // Arena Menu
   void arenaMenu(Player& p1);

    // Arena Tools
   Enemies* generateEnemy();
   void giveCoins(Player& p1);
};


#endif //CST210FINAL_ARENA_H
