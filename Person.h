#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using namespace std;

class Person{
private:
 string name;
 double height;
public:
Person();
Person(string, double);
Person(const Person& rhs);
Person& operator=(const Person& rhs);

string getName() const;
double getHeight() const;
bool operator<(const Person& other) const;
};
#endif