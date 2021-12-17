//
// Created by James Miller on 12/15/21.
//

#include "Shop.h"

void Shop::shopMenu(Player &p1) {
    int tempChoice;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "           Welcome to the Store!" << std::endl;
    std::cout << "You have: " << p1.getCoins() << " coins!" << std::endl;
    std::cout << "You can buy -> " << std::endl;
    std::cout << "1. Common Armor - 20 coins." << std::endl;
    std::cout << "2. Legendary Armor - 30 coins" << std::endl;
    std::cout << "3. Exotic Armor - 50 coins" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "4. Common Sword - 20 coins" << std::endl;
    std::cout << "5. Legendary Sword - 30 coins" << std::endl;
    std::cout << "6. Exotic Sword - 50 coins" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "7. Healing Potion - 10 coins" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "Make a selection (1-7) or Leave (9): ";
    std::cin >> tempChoice;
}

bool Shop::buyItem(Player &p1) {
    return false;
}

bool Shop::sellItem(Player &p1) {
    return false;
}
