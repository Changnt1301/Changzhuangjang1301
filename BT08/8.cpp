#include <iostream>
using namespace std;

struct Point {
    int x, y;
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}
};

int main() {
    Point myPoint(10, 20);
    cout << "Địa chỉ của trường x: " << &myPoint.x << endl;
    cout << "Địa chỉ của trường y: " << &myPoint.y << endl;
    cout << "Địa chỉ của biến myPoint: " << &myPoint << endl;
    return 0;
}
