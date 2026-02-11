transporter.h

#ifndef TRANSPORTER_H
#define TRANSPORTER_H


template <typename T> 
class transporter(){
Public:
transporter()=default;
virtual ~transporter()=default;

virtual load(const T& item)=0;
virtual T unload()=0;
virtual void empty()=0;
virtual void move()=0;
virtual bool isEmpty() const=0;
virtual int getCount() const=0;
};
#endif 
