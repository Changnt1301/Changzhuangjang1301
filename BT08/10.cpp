#include <iostream>
#include <cstring>
using namespace std;

struct Point {
    int x, y;

    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}
};

struct Rectangle {
    int width, height;

    Rectangle(int w, int h) : width(w), height(h) {}
};

struct Person {
    char name[50];

    Person(const char* n) {
        strncpy(name, n, sizeof(name) - 1);
        name[sizeof(name) - 1] = '\0';
    }
};

int main() {
    Point p1(10, 20);
    Point p2 = p1;
    cout << &p1.x << endl;
    cout << &p1.y << endl;
    cout << &p2.x << endl;
    cout << &p2.y << endl;

    Rectangle rect1(100, 200);

    Rectangle rect2 = rect1;
    cout << &rect1.width << endl;
    cout << &rect1.height << endl;
    cout << &rect2.width << endl;
    cout << &rect2.height << endl;
    Person person1("Alice");
    Person person2 = person1;
    cout << "Địa chỉ của person1.name: " << static_cast<void*>(person1.name) << endl;
    cout << "Địa chỉ của person2.name: " << static_cast<void*>(person2.name) << endl;

    return 0;
}

