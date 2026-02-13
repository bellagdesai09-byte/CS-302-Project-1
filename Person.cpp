#include "Person.h"

Person::Person(){
 name = "none";
 height = 0.0;
}
Person::Person(string n, double h){
    name = n;
    height = h;
}
Person::Person(const Person &rhs)
{
    name = rhs.name;
    height= rhs.height;
}
Person& Person::operator=(const Person& rhs) {
    if (this != &rhs) { 
        this->name = rhs.name;
        this->height = rhs.height;
    }
    return *this;
}
string Person::getName() const{
    return name;
}
double Person::getHeight() const{
    return height;

}

bool Person::operator<(const Person& other) const{
if(this->height < other.height){
    return true;
} else {
    return false;
}
}