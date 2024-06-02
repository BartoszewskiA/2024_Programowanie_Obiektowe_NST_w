#include <iostream>

using namespace std;

class Wektor
{
private:
    double x;
    double y;

public:
    Wektor(double pX, double pY) : x(pX), y(pY) {}
    double getX() { return x; }
    double getY() { return y; }
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }
};

Wektor operator+(Wektor w1, Wektor w2)
{
    double wx = w1.getX() + w2.getX();
    double wy = w1.getY() + w2.getY();
    Wektor wynik(wx, wy);
    return wynik;
}

Wektor operator-(Wektor w1, Wektor w2)
{
    double wx = w1.getX() - w2.getX();
    double wy = w1.getY() - w2.getY();
    Wektor wynik(wx, wy);
    return wynik;
}

int main()
{
    Wektor w1(20, 40), w2(54, 9);
    Wektor wynik = w1 + w2;
    cout << wynik.getX() << " " << wynik.getY();
    return 0;
}