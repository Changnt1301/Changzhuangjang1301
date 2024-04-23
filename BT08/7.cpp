#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Point {
    int x, y;
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}
};

struct Rect {
    int x, y;
    int w, h;
    Rect(int xCoord, int yCoord, int width, int height) : x(xCoord), y(yCoord), w(width), h(height) {}
};

struct Ship {
    Rect bounds;
    string id;
    int dx, dy;
    Ship(const Rect& rect, const string& shipId, int velocityX, int velocityY)
        : bounds(rect), id(shipId), dx(velocityX), dy(velocityY) {}
    void move() {
        bounds.x += dx;
        bounds.y += dy;
    }
};

void display(const Ship& ship) {
    cout << "Ship ID: " << ship.id << ", Position: (" << ship.bounds.x << ", " << ship.bounds.y << ")" << endl;
}

int main() {

    Ship ship1(Rect(10, 20, 30, 40), "ABC123", 2, 1);
    Ship ship2(Rect(50, 60, 20, 30), "XYZ789", -1, 3);
    int loop = 0;
    while (loop < 10) {
        ship1.move();
        ship2.move();
        display(ship1);
        display(ship2);
        loop++;
    }
    return 0;
}



