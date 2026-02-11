Cargo.cpp
#include CARGO_H
Cargo::Cargo(){
type = "none";
weight = 0.0;
}
Cargo::Cargo(string t, int w){
type = t;
weight = w;
}
Cargo::Cargo(Train&rhs){
type = rhs.type;
weight = rhs.weight;
}

string Cargo::getType() const{
    return type;
};
double Cargo::getWeight() const{
    return weight;
};
};
#endif