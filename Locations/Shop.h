//
// Created by James Miller on 12/15/21.
//

#ifndef CST210FINAL_SHOP_H
#define CST210FINAL_SHOP_H


#include "../Game/Player.h"

class Shop {
public:
    // Shop Menu
    void shopMenu(Player &p1);

    // Buy and Sell Tools
    bool buyItem(Player &p1);
    bool sellItem(Player &p1);
};


#endif //CST210FINAL_SHOP_H
