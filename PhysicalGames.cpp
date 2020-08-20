//
// Created by OEM on 20/08/2020.
//
#include <iomanip>
#include "PhysicalGames.h"

PhysicalGames::PhysicalGames() {}

PhysicalGames::PhysicalGames(string name, double price, double tax, double itemWeight, string productDimensions)
: Game(name, price, tax) {
    this->itemWeight = itemWeight;
    this->productDimensions = productDimensions;
}

double PhysicalGames::getItemWeight() const {
    return itemWeight;
}

void PhysicalGames::setItemWeight(double itemWeight) {
    PhysicalGames::itemWeight = itemWeight;
}

string PhysicalGames::getProductDimensions() const {
    return productDimensions;
}

void PhysicalGames::setProductDimensions(string productDimensions) {
    PhysicalGames::productDimensions = productDimensions;
}

string PhysicalGames::toString() {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Game Name: " << getName()
           << "\nItem Weight: " << getItemWeight()
           << "\nProduct Dimensions: " << getProductDimensions()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax();

    return output.str();
}
