#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string brand;
    int speed;

    Vehicle(string b, int s) {
        brand = b;
        speed = s;
    }
};

class Car : public Vehicle {
public:
    int numberOfDoors;

    Car(string b, int s, int d) : Vehicle(b, s) {
        numberOfDoors = d;
    }
};

int main() {
    Car c("BMW", 400, 4);

    cout << "Brand: " << c.brand << endl;
    cout << "Speed: " << c.speed << endl;
    cout << "Number of Doors: " << c.numberOfDoors << endl;

    return 0;
}
