#ifndef TRANSPORTER_H
#define TRANSPORTER_H
#include <iostream>
using namespace std;

template <typename T> 
class Transporter{
public:
Transporter()=default;
virtual ~Transporter()=default;

virtual void load(const T& item)= 0;
virtual void unload()=0;
virtual void empty()=0;
virtual void move()=0;
virtual bool isEmpty() const=0;
virtual int getCount() const=0;
};
#endif 
