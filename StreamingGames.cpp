//
// Created by OEM on 20/08/2020.
//

#include <string>
#include <iomanip>
#include "StreamingGames.h"

StreamingGames::StreamingGames() {}

StreamingGames::StreamingGames(const string &name, double price, double tax, const string &linkGame)
: Game(name, price,tax),linkGame(linkGame) {}

const string &StreamingGames::getLinkGame() const {
    return linkGame;
}

void StreamingGames::setLinkGame(const string &linkGame) {
    StreamingGames::linkGame = linkGame;
}

string StreamingGames::toString() {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Game Name: " << getName()
           << "\nFile path: " << getLinkGame()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax();

    return output.str();
}