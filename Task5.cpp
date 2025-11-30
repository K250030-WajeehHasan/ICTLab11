#include <iostream>
using namespace std;

class Employee {
protected:
    int employeeID;
    int salary;
};

class PartTimeEmployee : protected Employee {
public:
    PartTimeEmployee(int id, int rate) {
        employeeID = id;
        salary = rate;
    }

    int calculateSalary(int hours) {
        return salary * hours;
    }

    void show() {
        cout << "Employee ID: " << employeeID << endl;
    }
};

int main() {
    PartTimeEmployee p(1100, 5000000);
    p.show();
    cout << "Total Salary: " << p.calculateSalary(6) << endl;
    return 0;
}

