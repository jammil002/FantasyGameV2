//
// Created by James Miller on 12/15/21.
//

#ifndef CST210FINAL_ITEM_H
#define CST210FINAL_ITEM_H


#include <string>

class Item {
protected:
    std::string name;
    int cost;
    std::string itemType;
public:
    virtual ~Item() {};
    virtual std::string &getName() = 0;
    virtual void setName(std::string &getName) = 0;
    virtual int getCost() = 0;
    virtual void setCost(int cost) = 0;
    virtual std::string getItemType() = 0;

};


#endif //CST210FINAL_ITEM_H
