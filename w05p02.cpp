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

    friend Wektor operator-(Wektor w1, Wektor w2);
    friend Wektor operator+(Wektor w1, Wektor w2);
    friend Wektor operator*(Wektor w1, double skalar);
    friend Wektor operator*(double skalar, Wektor w1);
    friend void operator+=(Wektor &w1, Wektor w2);
    friend ostream &operator<<(ostream &str, Wektor w);
    friend istream &operator>>(istream &str, Wektor &w);
};

ostream &operator<<(ostream &str, Wektor w)
{
    str << w.x << " " << w.y;
    return str;
}

istream &operator>>(istream &str, Wektor &w)
{
    str >> w.x;
    str >> w.y;
    return str;
}

Wektor operator+(Wektor w1, Wektor w2)
{
    double wx = w1.x + w2.x;
    double wy = w1.y + w2.y;
    Wektor wynik(wx, wy);
    return wynik;
}

Wektor operator-(Wektor w1, Wektor w2)
{
    double wx = w1.x - w2.y;
    double wy = w1.y - w2.y;
    Wektor wynik(wx, wy);
    return wynik;
}

Wektor operator*(Wektor w1, double skalar)
{
    double wx = w1.x * skalar;
    double wy = w1.y * skalar;
    Wektor wynik(wx, wy);
    return wynik;
}

Wektor operator*(double skalar, Wektor w1)
{
    double wx = w1.x * skalar;
    double wy = w1.y * skalar;
    Wektor wynik(wx, wy);
    return wynik;
}

void operator+=(Wektor &w1, Wektor w2)
{
    w1.x -= w2.x;
    w1.y -= w2.y;
}

int main()
{
    // Wektor w1(20, 40), w2(54, 9);
    // w1 += w2;
    // cout << w1.getX() << " " << w1.getY();
    Wektor w1(0, 0);
    cout << "podaj wektor: ";
    cin >> w1;
    cout << w1;
    return 0;
}