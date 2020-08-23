//
// Created by Maikol Guzman on 8/17/20.
//

#include <iomanip>
#include <fstream>
#include "Game.h"

Game::Game() {}

Game::Game(string name, double price, double tax) : name(name), price(price), tax(tax) {}

string Game::getName() const {
    return name;
}

void Game::setName(string &name) {
    Game::name = name;
}

double Game::getPrice() const {
    return price;
}

void Game::setPrice(double price) {
    Game::price = price;
}

double Game::getTax() const {
    return tax;
}

void Game::setTax(double tax) {
    Game::tax = tax;
}

double Game::calculatePriceWithTax() {
    return getPrice() + (getPrice() * getTax());
}

/**
 * Save the information into a text file
 * @param filename the name of the text file
 */
void Game::save(string &filename) {
    ofstream ofs (filename,ofstream::out);

    ofs << toString();

    ofs.close();
}

string Game::toString() {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Game Name: " << getName()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax();

    return output.str();
}

double Game::applyDiscount()
{
    return getPrice();
}