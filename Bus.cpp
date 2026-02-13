#include "Bus.h"

Bus::Bus()
{
    name = "default";
    maxCapacity = 10;
    busCount = 0;
    fare = 0.0;
    items = new Person[maxCapacity];
}
Bus::Bus(string n, int mc)
{
    name = n;
    maxCapacity = mc;
    busCount = 0;
    fare = 0;
    items = new Person[maxCapacity];
}
Bus::Bus(const Bus &rhs)
{
    name = rhs.name;
    maxCapacity = rhs.maxCapacity;
    busCount = rhs.busCount;
    fare = rhs.fare;
    items = new Person[maxCapacity];

    for (int i = 0; i < busCount; i++)
    {
        items[i] = rhs.items[i];
    }
}
Bus::~Bus()
{
    delete[] items;
}
void Bus::load(const Person &item)
{
    if (busCount < maxCapacity)
    {
        int i = busCount - 1;
        while (i >= 0 && item < items[i])
        {
            items[i + 1] = items[i];
            i--;
        }
        items[i + 1] = item;
        busCount++;
    }
    else
    {
        cout << "The bus is full!" << endl;
    }
}
void Bus::unload()
{
    if (busCount > 0)
    {
        busCount--;
    }
}
void Bus::move()
{
    cout << "The bus is driving to the next stop with " << busCount << " passengers. " << endl;
}
bool Bus::isEmpty() const
{
    if (busCount == 0) {
        return true;
    } else {
        return false;
    }
}
void Bus::empty()
{
    busCount = 0;
}
int Bus::getCount() const
{
    return busCount;
}

double Bus::getTotalHeight() const
{
    double total = 0.0;
    for (int i = 0; i < busCount; i++)
    {
        total += items[i].getHeight();
    }
    return total;
}
void Bus::setFare(double f)
{
    fare = f;
}
double Bus::getTotalFare() const
{
    return fare * busCount;
}