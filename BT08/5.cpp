struct Rect {
    int x, y;
    int w, h;
    Rect(int xCoord, int yCoord, int width, int height) : x(xCoord), y(yCoord), w(width), h(height) {}
    bool contains(const Point& p) const {
        return (p.x >= x && p.x <= x + w && p.y >= y && p.y <= y + h);
    }
};
