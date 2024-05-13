#include <iostream>

using namespace std;

class Punkt
{
private:
    double x;
    double y;

public:
    double getX() { return x; }
    double getY() { return y; }

    void setX(double px) { x = px; }
    void setY(double py) { y = py; }
};

int main()
{
    Punkt p1;
    p1.setX(30);
    p1.setY(50);
    cout << p1.getX() << ";" << p1.getY();
    return 0;
}