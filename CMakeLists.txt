cmake_minimum_required(VERSION 3.21)
project(CST210Final)

set(CMAKE_CXX_STANDARD 23)

add_executable(CST210Final Main.cpp Game/Player.cpp Game/Player.h Items/Item.h Items/Armor/Armor.h Items/Swords/Sword.h Items/Potions/Potion.h Enemies/Enemies.h Locations/Arena.cpp Locations/Arena.h Locations/Shop.cpp Locations/Shop.h Game/Driver.cpp Game/Driver.h Enemies/Knight.cpp Enemies/Knight.h EaseOfUse/easeOfUse.cpp EaseOfUse/easeOfUse.h Items/Swords/StarterSword.cpp Items/Swords/StarterSword.h Items/Swords/CommonSword.cpp Items/Swords/CommonSword.h Items/Swords/LegendarySword.cpp Items/Swords/LegendarySword.h Items/Swords/ExoticSword.cpp Items/Swords/ExoticSword.h Items/Potions/HealingPotion.cpp Items/Potions/HealingPotion.h Items/Armor/StarterArmor.cpp Items/Armor/StarterArmor.h Items/Armor/CommonArmor.cpp Items/Armor/CommonArmor.h Items/Armor/LegendaryArmor.cpp Items/Armor/LegendaryArmor.h Items/Armor/ExoticArmor.cpp Items/Armor/ExoticArmor.h)
