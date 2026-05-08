#include <iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void area() {
        float r = 5;
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() {
        int l = 4, b = 6;
        cout << "Area of Rectangle: " << l * b << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.draw();
    c.area();

    cout << endl;

    r.draw();
    r.area();

    return 0;
}