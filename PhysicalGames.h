//
// Created by OEM on 20/08/2020.
//

#ifndef LAB04_SOLID_PHYSICALGAMES_H
#define LAB04_SOLID_PHYSICALGAMES_H

#endif //LAB04_SOLID_PHYSICALGAMES_H
#include <sstream>
#include "Game.h"

using namespace std;

class PhysicalGame : public Game {
public:
    PhysicalGame();

    PhysicalGame(string name, double price, double tax, double itemWeight, string productDimensions);

    double getItemWeight() const;

    void setItemWeight(double itemWeight);

    string getProductDimensions() const;

    void setProductDimensions(string productDimensions);

    string toString();
private:
    double itemWeight;
    string productDimensions;
};