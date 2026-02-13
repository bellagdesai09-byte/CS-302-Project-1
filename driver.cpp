#include <iostream>
#include "Train.h"
#include "Bus.h"
#include "Cargo.h"
#include "Person.h"
//  Include your class headers here.  Please use PascalCase for naming.

using namespace std;

int main()
{
    cout << "=== CS 302 Project 1: Transporters ===" << endl;
    cout << endl;

    // ------------------------------------------------------------
    // Create a Train and load it with Cargo
    // ------------------------------------------------------------

    cout << "Creating train..." << endl;

    // Create a train.
    Train myTrain("Sierra Express", 10);

    // The train should be empty when first created.
    // Demonstrate this by outputting:
    cout << "Is train empty? " << (myTrain.isEmpty()? "Yes" : "No") << endl;
    cout << "Current cargo count: " << myTrain.getCount() << endl;

    //  - whether the train is empty
    //  - how many cargo items it currently holds



    // Let's load our train!
    cout << "Loading cargo onto train..." << endl;

    // Create several Cargo objects.
    // Each cargo should have:
    //  - a type (string)
    //  - a weight (double)
    Cargo box1("Electronics", 45.5);
    Cargo box2("Medical Supplies", 120.2);
    Cargo box3("Food", 80.0);


    // Load cargo onto the train.
    // After loading, the train should no longer be empty.
    myTrain.load(box1);
    myTrain.load(box2);
    myTrain.load(box3);


    // Display the number of cargo items on the train.
    // Also display whether the train is empty.
    cout << "Items on train: " << myTrain.getCount() << endl;
    cout << "Is train empty now? " << (myTrain.isEmpty() ? "Yes" : "No") << endl;


    // Output train-specific functionality.
    // For example:
    //  - total weight of all cargo
    //  - any other behavior unique to a train

    cout << "Total weight of all cargo: " << myTrain.getTotalWeight() << " lbs" << endl;

    // Demonstrate unloading one cargo item.
    // Then display the updated cargo count.
    cout << "Unloading one cargo item..." << endl;
    myTrain.unload();
    cout << "The updated cargo count is now: " << myTrain.getCount() << "." << endl;


    // Demonstrate moving the train.
    // The move function may output its own message.
    myTrain.move();
    cout << "Train is now moving..."<< endl;


    cout << endl;

    // ------------------------------------------------------------
    // Create a Bus and load it with People
    // ------------------------------------------------------------

    cout << "Creating bus..." << endl;
    Bus myBus("Wolf Pack Trainsit", 5);
    // Create a bus.


    // The bus should be empty when first created.
    // Demonstrate this with output.
    cout << "Is bus empty? " << (myBus.isEmpty() ? "Yes" : "No") <<endl;
    cout << "Loading passengers onto bus..." << endl; 


    // Set the fare for the bus.
    myBus.setFare(2.00);
    cout << "Bus fare is set to  $2.00" << endl;


    cout << "Loading passengers onto bus..." << endl;

    // Create several Person objects.
    // Each person should have:
    //  - a name
    //  - a height
    //
    // Intentionally create people in an order
    // that is NOT sorted by height.

    Person p1("Alice", 6.0);
    Person p2("Bob", 5.2);
    Person p3("Charlie", 5.7);

    // Load people onto the bus.
    // The bus should automatically keep passengers
    // sorted from shortest to tallest.
    myBus.load(p1);
    myBus.load(p2);
    myBus.load(p3);


    // Display the number of passengers on the bus.
    // Also display whether the bus is empty.
    cout << "Passengers on bus: " << myBus.getCount() << endl;



    // Output bus-specific functionality.
    // For example:
    //  - total fare collected
    //  - any other behavior unique to a bus
    cout << "Total height of all passengers: " << myBus.getTotalHeight() << " ft" << endl;
    cout << "Total fare collected $" << myBus.getTotalFare() << endl;

    // Demonstrate unloading one passenger.
    // Then display the updated passenger count.
    cout << "Unloading one passenger..." << endl;
     myBus.unload();
    cout << "The updated passenger count is now: " << myBus.getCount() << "." << endl;


    // Demonstrate moving the bus.
    // The move function may output its own message.
    myBus.move();
    cout << "The bus is now moving..." << endl;


    cout << endl;

    // ------------------------------------------------------------
    // Demonstrate emptying transporters
    // ------------------------------------------------------------

    cout << "Emptying train and bus..." << endl;

    // Empty the train.
   while(!myTrain.isEmpty()){
    myTrain.unload();
}
    

    // Empty the bus.

    while(!myBus.isEmpty()) {
        myBus.unload();
    }

    // Demonstrate that both transporters are now empty.
    // Output both:
    //  - empty status
    //  - item count
    cout << "Train count after unload: " << myTrain.getCount() << " (Empty: " << (myTrain.isEmpty() ? "Yes" : "No") << ")" << endl;
    cout << "Bus count after unload: " << myBus.getCount() << " (Empty: " << (myBus.isEmpty() ? "Yes" : "No") << ")" << endl;
    cout << endl;
    cout << "=== End of Program ===" << endl;

    return 0;
}
