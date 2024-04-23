#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

void modifyByValue(Point p) {
    p.x = 100;
    p.y = 200;
}

void modifyByReference(Point &p) {
    p.x = 100;
    p.y = 200;
}

int main() {
    Point point;
    point.x = 10;
    point.y = 20;
    cout << point.x << point.y << endl;
    modifyByValue(point);
    cout << point.x << point.y << endl;
    modifyByReference(point);
    cout << point.x << point.y << endl;
    return 0;
}
