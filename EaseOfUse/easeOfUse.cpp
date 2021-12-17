//
// Created by James Miller on 12/16/21.
//

#include <iostream>
#include "easeOfUse.h"

void easeOfUse::spacer() {
    std::cout << "----------------------------------------------" << std::endl;
}

std::string easeOfUse::toLower(std::string toLowerString) {
    std::string lowerCase;
    for(int i = 0; i < toLowerString.size(); i++){
        lowerCase += tolower(toLowerString[i]);
    }
    return lowerCase;
}
