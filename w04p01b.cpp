#include <iostream>

using namespace std;

class Punkt
{
protected:
    int x;
    int y;

public:
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
    void setKolor(string kolor) { this->kolor = kolor; }
    string getKolor() { return kolor; }
    void wypisz() { cout << x << " ; " << y; }
};

int main()
{

    Piksel p1;
    p1.setX(10);
    p1.setY(20);
    p1.setKolor("red");
    // p1.x=100;
    cout << p1.getX() << " , " << p1.getY() << " - " << p1.getKolor();
    return 0;
}