Person.cpp
#include PERSON_H

Person::Person(){
 name = "none";
 height = 0.0;
}
Person::Person(string n, double h){
    name = n;
    height = h;
}
Person::Person(Person&rhs)
{
    name = rhs.name;
    height= rhs.height;
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