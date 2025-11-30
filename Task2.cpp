#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int id;
    string name;
    int grade;

    Student(int i, string n, int g) {
        id = i;
        name = n;
        grade = g;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Grade Level: " << grade << endl;
    }
};

int main() {
    int id, grade;
    string name;

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Grade Level: ";
    cin >> grade;

    Student s(id, name, grade);

    s.display();

    return 0;
}
