//
// Created by OEM on 20/08/2020.
//

#ifndef LAB04_SOLID_DIGITALGAMES_H
#define LAB04_SOLID_DIGITALGAMES_H

#endif //LAB04_SOLID_DIGITALGAMES_H
#include <sstream>
#include "Game.h"

using namespace std;

class DigitalGames : public Game {
public:
    DigitalGames();

    DigitalGames(const string &name, double price, double tax, const string &filePath);

    const string &getFilePath() const;

    void setFilePath(const string &filePath);

    string toString();

    string replaceGame();

private:
    double applyDiscount() override;

private:
    string filePath;
};