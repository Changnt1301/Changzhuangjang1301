#include <iostream>
using namespace std;

struct Point {
    int x, y;
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}
};

void printAddress(const Point& p) {
    cout << "Địa chỉ của biến kiểu Point: " << &p << endl;
    cout << "Địa chỉ của trường x: " << &(p.x) << endl;
    cout << "Địa chỉ của trường y: " << &(p.y) << endl;
}

void passByValue(Point p) {
    cout << "Truyền tham trị vào hàm passByValue:" << endl;
    printAddress(p);
}

void passByReference(const Point& p) {
    cout << "Truyền tham chiếu vào hàm passByReference:" << endl;
    printAddress(p);
}

int main() {
    Point myPoint(10, 20);
    cout << "Địa chỉ của biến kiểu Point trong hàm main: " << &myPoint << endl;
    cout << "Địa chỉ của trường x trong hàm main: " << &(myPoint.x) << endl;
    cout << "Địa chỉ của trường y trong hàm main: " << &(myPoint.y) << endl;
    cout << "\n-- Truyền tham trị --" << endl;
    passByValue(myPoint);
    cout << "\n-- Truyền tham chiếu --" << endl;
    passByReference(myPoint);
    return 0;
}
