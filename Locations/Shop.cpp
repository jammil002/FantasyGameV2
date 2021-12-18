//
// Created by James Miller on 12/15/21.
//

#include "Shop.h"

void Shop::shopMenu(Player &p1) {
    int tempChoice;
    std::cout << "==============================================" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "           Welcome to the Store!" << std::endl;
    std::cout << "You have: " << p1.getCoins() << " coins!" << std::endl;
    std::cout << "You can buy -> " << std::endl;
    std::cout << "1. Common Armor (Health + 20) - 20 coins." << std::endl;
    std::cout << "2. Legendary Armor (Health + 30) - 30 coins" << std::endl;
    std::cout << "3. Exotic Armor (Health + 50) - 50 coins" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "4. Common Sword (Damage + 10) - 20 coins" << std::endl;
    std::cout << "5. Legendary Sword (Damage + 15) - 30 coins" << std::endl;
    std::cout << "6. Exotic Sword (Damage + 30) - 50 coins" << std::endl;
    std::cout << "-" << std::endl;
    std::cout << "7. Healing Potion (Health + 10) - 10 coins" << std::endl;
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
