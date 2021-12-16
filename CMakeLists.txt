cmake_minimum_required(VERSION 3.21)
project(CST210Final)

set(CMAKE_CXX_STANDARD 23)

add_executable(CST210Final Main.cpp Player.cpp Player.h Items/Item.h Items/Armor/Armor.cpp Items/Armor/Armor.h Items/Swords/Sword.cpp Items/Swords/Sword.h Items/Potions/Potion.cpp Items/Potions/Potion.h Enemies/Enemies.h Locations/Arena.cpp Locations/Arena.h Locations/Shop.cpp Locations/Shop.h)
