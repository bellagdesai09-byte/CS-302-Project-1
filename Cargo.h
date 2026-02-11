Cargo.h
#include TRANSPORTER_H
#ifndef CARGO_H
#define CARGO_H
#include <string>
using namespace std;
class Cargo {
private:
string type;
double weight;
public:
Cargo();
Cargo(string, int);
Cargo(Train&rhs);

string getType() const;
double getWeight() const;
};
#endif