#include <iostream>

using namespace std;

class Punkt
{
protected:
    int x;
    int y;

public:
    // Punkt() : x(0), y(0) {}
    Punkt(int px, int py) : x(px), y(py) {}
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    int getX() { return x; }
    int getY() { return y; }
};

//---------------------------------------------------------

class Piksel : public Punkt
{
protected:
    string kolor;

public:
    Piksel(int px, int py, string kol) : Punkt(px, py), kolor(kol) {}
    void setKolor(string kolor) { this->kolor = kolor; }
    string getKolor() { return kolor; }
    void wypisz() { cout << x << " ; " << y; }
};

int main()
{

    Piksel p1(2, 4, "red");
    p1.setX(10);
    p1.setY(20);
    p1.setKolor("red");
    // p1.x=100;
    cout << p1.getX() << " , " << p1.getY() << " - " << p1.getKolor();
    return 0;
}