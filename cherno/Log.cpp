//
// Created by m on 6/8/24.
//

#include <iostream>
#include "Log.h"



void initLog() {
    Log("Init log");
}

inline void Log(const char *message) {
    std::cout << message << std::endl;
}

