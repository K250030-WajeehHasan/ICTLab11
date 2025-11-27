#include <iostream>
using namespace std;
class BankAccount {
public:
    string name;
    double balance;
    BankAccount(string n, double b) {
        name = n;
        balance = b;
        cout << "Account created for " << name << endl;
    }
};
int main() {
    string customerName;
    double initialBalance;
    cout << "Enter account holder name: ";
    getline(cin, customerName);
    cout << "Enter initial balance: ";
    cin >> initialBalance;
    BankAccount acc(customerName, initialBalance);
    return 0;
}