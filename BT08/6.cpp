struct Ship {
    Rect bounds;
    string id;
    int dx, dy;
    Ship(const Rect& rect, const string& shipId) : bounds(rect), id(shipId), dx(0), dy(0) {}
    void move() {
        bounds.x += dx;
        bounds.y += dy;
    }
};

void display(const Ship& ship) {
    cout << "Ship ID: " << ship.id << endl;
    cout << "Position: (" << ship.bounds.x << ", " << ship.bounds.y << ")" << endl;
}

