#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    string name;

    Animal(string n) {
        name = n;
    }

    void makeSound() {
        cout << name << " makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) { }

    void bark() {
        cout << name << " barks" << endl;
    }
};

int main() {
    Animal a("Animal");
    a.makeSound();

    Dog d("Dog");
    d.makeSound();
    d.bark();

    return 0;
}

