#include <iostream>
using namespace std;

int main() {
    int x = 5;
    int &ref_x = x;

    cout << "Address of x: " << &x << endl;
    cout << "Address of ref_x: " << &ref_x << endl;

    ref_x = 10;
    cout << "New value of x: " << x << endl;

    int y = 20;
    int &ref_y = y;
    cout << "Address of y: " << &y << endl;

    int z = 30;
    ref_y = z;
    cout << "New adress of y: " << &y << endl;
    return 0;
}
