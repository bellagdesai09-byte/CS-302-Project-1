Train.h
#include TRANSPORTER_H
#ifndef TRAIN_H
#define TRAIN_H
#include <string>
class Train {
private:
string type;
double weight;
public:
Train();
Train(string, int);
Train(Train&rhs);
}