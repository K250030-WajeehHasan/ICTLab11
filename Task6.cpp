#include <iostream>
using namespace std;
class Product {
protected:
    double cost;
    string company;
public:
    Product(double c, string comp) {
        cost = c;
        company = comp;
    }
};
class DiscountedProduct : protected Product {
public:
    DiscountedProduct(double c, string comp) : Product(c, comp) {}
    void giveDiscount(double percentOff) {
        cost = cost - (cost * percentOff / 100);
        cout << "Company: " << company << endl;
        cout << "Price after discount: " << cost << endl;
    }
};
int main() {
    DiscountedProduct thing(1000, "Nike");
    thing.giveDiscount(20);
}