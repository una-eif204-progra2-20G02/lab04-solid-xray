//
// Created by OEM on 28/08/2020.
//

#ifndef LAB04_SOLID_GAMEMANAGER_H
#define LAB04_SOLID_GAMEMANAGER_H

#endif //LAB04_SOLID_GAMEMANAGER_H
#include <string>
#include <fstream>
#include "Game.h"
using namespace std;

class GameManager: Game{

public:
    void save(string &filename);
};
