#include <iostream>
class Point {
private:
    int x, y;

public:
    Point(int x = 60, int y = 80) : x(x), y(y) {}
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display() const {
        std::cout << "Point coordinates: (" << x << ", " << y << ")" << std::endl;
    }
};
int main() {
    Point point;
    point.display();
    point.setPoint(10, 20);
    point.display();
    return 0;
}
