//
// Created by James Miller on 12/15/21.
//

#include "Shop.h"
#include "../Items/Swords/ExoticSword.h"


void Shop::shopMenu(Player &p1) {
    int tempChoice;
    std::cout << "==============================================" << std::endl;
    std::cout << "----------------------------------------------" << std::endl;
    std::cout << "           Welcome to the Store!" << std::endl;
    std::cout << "You have: " << p1.getCoins() << " coins!" << std::endl;
    std::cout << "You can buy > " << std::endl;
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
    if (tempChoice == 1) { // Common Armor
        Item *commonArmor = new CommonArmor;
        p1.addItem(commonArmor);
        p1.setCoins(p1.getCoins() - commonArmor->getCost());
    } else if (tempChoice == 2) { // Legendary Armor
        Item *legendaryArmor = new LegendaryArmor;
        p1.addItem(legendaryArmor);
        p1.setCoins(p1.getCoins() - legendaryArmor->getCost());
    } else if (tempChoice == 3) { // Exotic Armor
        Item *exoticArmor = new ExoticArmor;
        p1.addItem(exoticArmor);
        p1.setCoins(p1.getCoins() - exoticArmor->getCost());
    } else if (tempChoice == 4) { // Common Armor
        int damageType;
        std::cout << "What is the damage type of this sword: Solar (1), Arc (2), Void (3): ";
        std::cin >> damageType;
        if (damageType == 1) {
            Item *commonSword = new CommonSword("Solar");
            p1.addItem(commonSword);
            p1.setCoins(p1.getCoins() - commonSword->getCost());
        } else if (damageType == 2) {
            Item *commonSword = new CommonSword("Arc");
            p1.addItem(commonSword);
            p1.setCoins(p1.getCoins() - commonSword->getCost());
        } else if (damageType == 3) {
            Item *commonSword = new CommonSword("Void");
            p1.addItem(commonSword);
            p1.setCoins(p1.getCoins() - commonSword->getCost());
        }
    } else if (tempChoice == 5) {
        int damageType;
        std::cout << "What is the damage type of this sword: Solar (1), Arc (2), Void (3): ";
        std::cin >> damageType;
        if (damageType == 1) {
            Item *legendarySword = new LegendarySword("Solar");
            p1.addItem(legendarySword);
            p1.setCoins(p1.getCoins() - legendarySword->getCost());
        } else if (damageType == 2) {
            Item *legendarySword = new LegendarySword("Arc");
            p1.addItem(legendarySword);
            p1.setCoins(p1.getCoins() - legendarySword->getCost());
        } else if (damageType == 3) {
            Item *legendarySword = new LegendarySword("Void");
            p1.addItem(legendarySword);
            p1.setCoins(p1.getCoins() - legendarySword->getCost());
        }
    } else if (tempChoice == 6) {
        int damageType;
        std::cout << "What is the damage type of this sword: Solar (1), Arc (2), Void (3): ";
        std::cin >> damageType;
        if (damageType == 1) {
            Item *exoticSword = new ExoticSword("Solar");
            p1.addItem(exoticSword);
            p1.setCoins(p1.getCoins() - exoticSword->getCost());
        } else if (damageType == 2) {
            Item *exoticSword = new ExoticSword("Arc");
            p1.addItem(exoticSword);
            p1.setCoins(p1.getCoins() - exoticSword->getCost());
        } else if (damageType == 3) {
            Item *exoticSword = new ExoticSword("Void");
            p1.addItem(exoticSword);
            p1.setCoins(p1.getCoins() - exoticSword->getCost());
        }
    } else if (tempChoice == 7) {
        Item *healPotion = new HealingPotion;
        p1.addItem(healPotion);
        p1.setCoins(p1.getCoins() - healPotion->getCost());
    }

    std::cout << "----------------------------------------------" << std::endl;
}

