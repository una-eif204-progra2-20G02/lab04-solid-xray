//
// Created by OEM on 20/08/2020.
//
#include <iomanip>
#include "DigitalGames.h"


DigitalGames::DigitalGames() {}

DigitalGames::DigitalGames(const string &name, double price, double tax, const string &filePath)
: Game(name, price,tax),filePath(filePath) {}

const string &DigitalGames::getFilePath() const {
    return filePath;
}

void DigitalGames::setFilePath(const string &filePath) {
    DigitalGames::filePath = filePath;
}

string DigitalGames::toString() {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Game Name: " << getName()
           << "\nFile path: " << getFilePath()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax();

    return output.str();
}

double  DigitalGames::applyDiscount()
{
    return getPrice() * 0.15;
}

string DigitalGames::replaceGame() {
    return  "this product will have a replacement.";
}