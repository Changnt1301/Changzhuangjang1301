#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};
void changePointByValue(Point p) {
    p.x = 10;
    p.y = 20;
}
void changePointByReference(Point &p) {
    p.x = 10;
    p.y = 20;
}
int main() {
    Point p1 = {5, 5};
    cout << "Gia tri ban dau cua p1: (" << p1.x << ", " << p1.y << ")\n";
    changePointByValue(p1);
    cout << "Sau khi goi ham changePointByValue: (" << p1.x << ", " << p1.y << ")\n";
    changePointByReference(p1);
    cout << "Sau khi goi ham changePointByReference: (" << p1.x << ", " << p1.y << ")\n";
    return 0;
}
