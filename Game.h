//
// Created by Maikol Guzman on 8/17/20.
//

#ifndef LAB04_SOLID_GAME_H
#define LAB04_SOLID_GAME_H
#include <sstream>
using namespace std;

class Game{
public:
    Game();

    Game(string name, double price, double tax);

    string getName() const;

    void setName(string &name);

    double getPrice() const;

    void setPrice(double price);

    double getTax() const;

    void setTax(double tax);

    double calculatePriceWithTax();

    string toString();
private:
    virtual double applyDiscount();
private:
    string name;
    double price;
    double tax;
};


#endif //LAB04_SOLID_GAME_H
