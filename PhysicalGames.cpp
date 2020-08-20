//
// Created by OEM on 20/08/2020.
//
#include "PhysicalGames.h"

PhysicalGame::PhysicalGame() {}

PhysicalGame::PhysicalGame(string name, double price, double tax, double itemWeight, string productDimensions)
: Game(name, price, tax) {
    this->itemWeight = itemWeight;
    this->productDimensions = productDimensions;
}

double PhysicalGame::getItemWeight() const {
    return itemWeight;
}

void PhysicalGame::setItemWeight(double itemWeight) {
    PhysicalGame::itemWeight = itemWeight;
}

string PhysicalGame::getProductDimensions() const {
    return productDimensions;
}

void PhysicalGame::setProductDimensions(string productDimensions) {
    PhysicalGame::productDimensions = productDimensions;
}

string PhysicalGame::toString() {
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Game Name: " << getName()
           << "\nItem Weight: " << getItemWeight()
           << "\nProduct Dimensions: " << getProductDimensions()
           << "\nPrice: $" << getPrice()
           << "\nPrice with Tax: $" << calculatePriceWithTax();

    return output.str();
}
