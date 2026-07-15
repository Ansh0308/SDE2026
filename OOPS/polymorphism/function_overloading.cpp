//function overloading
#include <bits/stdc++.h>
using namespace std;

class Shape
{
private:
    double _area;
    int no_of_sides;

public:
    Shape() : _area(0), no_of_sides(0) {}
    Shape(int n = 0) : no_of_sides(n) {}

    void calculate_area(int length) { _area = length * length; }
    void calculate_area(int length, int breadth) { _area = length * breadth; }
    void calculate_area(double base, double height) { _area = 0.5 * base * height; }
    void print_area() { cout << (_area) << "\n"; }
};

int main()
{
    Shape triangle(3), Square(4), Rectangle(4);
    triangle.calculate_area(4.0, 5.0); // 10
    triangle.print_area();

    Square.calculate_area(4); // 16
    Square.print_area();

    Rectangle.calculate_area(3, 4); // 12
    Rectangle.print_area();
}