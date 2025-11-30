#include <iostream>
using namespace std;

class Area {
public:
    int area(int side) {
        return side * side;
    }

    int area(int length, int width) {
        return length * width;
    }

    double area(double radius) {
        return 3.14 * radius * radius;
    }
};

int main() {
    Area a;
    cout << a.area(2) << endl;
    cout << a.area(8, 9) << endl;
    cout << a.area(4.7) << endl;
    return 0;
}
