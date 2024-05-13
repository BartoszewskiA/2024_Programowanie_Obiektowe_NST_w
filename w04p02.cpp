#include <iostream>

using namespace std;

class Punkt
{
private:
    int x;
    int y;

public:
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    int getX() { return x; }
    int getY() { return y; }
    void wypisz() { cout << x << " ; " << y; }
};

//---------------------------------------------------------

class Piksel : public Punkt
{
private:
    string kolor;

public:
    void setKolor(string kolor) { this->kolor = kolor; }
    string getKolor() { return kolor; }
    void wypisz()
    {
        //cout << getX() << " ; " << getY();
        Punkt::wypisz();
        cout << " - " << kolor;
    }
};

int main()
{
    Punkt p0;
    p0.setX(3);
    p0.setY(5);
    p0.wypisz();
    cout << endl;
    Piksel p1;
    p1.setX(10);
    p1.setY(20);
    p1.setKolor("red");
    p1.wypisz();
    return 0;
}