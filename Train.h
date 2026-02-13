#ifndef TRAIN_H
#define TRAIN_H
#include "Transporter.h"
#include "Cargo.h"
#include <string>
using namespace std;
class Train : public Transporter<Cargo>
{
private:
    string name;
    int maxCapacity;
    int trainCount;
    Cargo *items;

public:
    Train();
    Train(string, int);
    Train(Train &rhs);
    ~Train() override;
    void load(const Cargo &item) override;
    void unload() override;
    void move() override;
    bool isEmpty() const override;
    void empty() override;
    int getCount() const override;

    double getTotalWeight() const;
};
#endif