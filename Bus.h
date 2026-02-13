#ifndef BUS_H
#define BUS_H
#include "Transporter.h"
#include "Person.h"
#include <string>
using namespace std;
class Bus : public Transporter<Person>
{
private:
    string name;
    int maxCapacity;
    int busCount;
    Person *items;
    double fare;

public:
    Bus();
    Bus(string, int);
    Bus(const Bus &rhs);
    ~Bus();
    void load(const Person &item) override;
    void unload() override;
    void move() override;
    bool isEmpty() const override;
    void empty() override;
    int getCount() const override;

    double getTotalHeight() const;
    void setFare(double f);
    double getTotalFare() const;
};
#endif