#include <iostream>
#include <string>
using namespace std;

class Printer {
public:
    void printInfo(string name) {
        cout << "Name: " << name << endl;
    }

    void printInfo(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void printInfo(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    Printer p;
    p.printInfo("Wajeeh");
    p.printInfo("Safi", 20);
    p.printInfo("Mustafa", 25, "Karachi");
    return 0;
}

