#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment() {
        cout << "Processing payment..." << endl;
    }
};

class CreditCardPayment : public Payment {
public:
    void processPayment() {
        cout << "Processing credit card payment" << endl;
    }
};

class CashPayment : public Payment {
public:
    void processPayment() {
        cout << "Processing cash payment" << endl;
    }
};

class UPIPayment : public Payment {
public:
    void processPayment() {
        cout << "Processing UPI payment" << endl;
    }
};

int main() {
    Payment* p;

    p = new CreditCardPayment();
    p->processPayment();

    p = new CashPayment();
    p->processPayment();

    p = new UPIPayment();
    p->processPayment();

    return 0;
}
