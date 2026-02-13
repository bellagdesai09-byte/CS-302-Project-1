#include "Cargo.h"
Cargo::Cargo(){
type = "none";
weight = 0.0;
}
Cargo::Cargo(string t, int w){
type = t;
weight = w;
}
Cargo::Cargo(const Cargo& rhs){
type = rhs.type;
weight = rhs.weight;
}
Cargo& Cargo::operator=(const Cargo& rhs) {
    if (this != &rhs) {
        this->type = rhs.type;
        this->weight = rhs.weight;
    }
    return *this; 
}
string Cargo::getType() const{
    return type;
};
double Cargo::getWeight() const{
    return weight;
};
