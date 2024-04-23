Point mid_point(const Point& p1, const Point& p2) {
    int midX = (p1.x + p2.x) / 2;
    int midY = (p1.y + p2.y) / 2;
    return Point(midX, midY);
}
