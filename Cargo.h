#ifndef CARGO_H
#define CARGO_H
#include <string>
#include <iostream>
#include "Transporter.h"
using namespace std;
class Cargo {
private:
string type;
double weight;
public:
Cargo();
Cargo(string, int);
Cargo(const Cargo& rhs);
Cargo& operator=(const Cargo& rhs);
string getType() const;
double getWeight() const;
};
#endif