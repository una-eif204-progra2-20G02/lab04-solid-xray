//
// Created by OEM on 20/08/2020.
//

#ifndef LAB04_SOLID_STREAMINGGAMES_H
#define LAB04_SOLID_STREAMINGGAMES_H

#endif //LAB04_SOLID_STREAMINGGAMES_H
#include <sstream>
#include "Game.h"

using namespace std;

class StreamingGames : Game {
public:
    StreamingGames();

    StreamingGames(const string &name, double price, double tax, const string &linkGame);

    const string &getLinkGame() const;

    void setLinkGame(const string &linkGame);

    string toString();

private:
    string linkGame;
};