Train.cpp

Train::Train(){
name = "default";
maxCapacity = 10;
trainCount= 0;
items = new Cargo[maxCapacity];
}
Train::Train(string nm, int mc){
name = nm;
maxCapacity = mc;
trainCount = 0;
items = new Cargo[maxCapacity];
}
Train::Train(Train&rhs){
name = rhs.name;
maxCapacity = rhs.maxCapacity;
trainCount = rhs.trainCount;
items = new Cargo[maxCapacity];
for (int i=0; i < trainCount; i++){
    items[i] = rhs.items[i];
}
}
Train::~Train(){
    delete[] items;
}
void Train::load(const Cargo& item){
    if(trainCount<maxCapacity){
        items[trainCount]=item;
        trainCount++;
    }else{
        cout << "Train is full!" << endl;
    }
    }
void Train::unload(){
    trainCount = 0;
}
void Train::move(){
    cout << "The train is moving to the next station..."<< endl;
}
bool Train::isEmpty() const{
    return trainCount == 0;
}
int Train::getCount() const{
    return trainCount;
}

double getTotalWeight() const{
    double total = 0.0;
    for (int i=0; i < trainCount; i++){
        total += items[i].getWeight();
    }
    return total;
}
