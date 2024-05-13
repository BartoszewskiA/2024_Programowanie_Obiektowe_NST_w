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
    void wypisz() { cout << x << " ; " << y; }
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
    void wypisz()
    {
        Punkt::wypisz();
        cout << " - " << kolor;
    }
};
//---------------------------------------------------------------------

class Piksel_3D : public Piksel
{
protected:
    int z;

public:
    Piksel_3D(int px, int py, int pz, string kol) : Piksel(px, py, kol), z(pz) {}
    void setZ(int z) { this->z = z; }
    int getZ() { return z; }
    void wypisz()
    {
        cout << x << "," << y << "," << z << " - " << kolor;
    }
};

//----------------------------------------------------------------------
int main()
{

    Piksel_3D p1(2, 4, 6, "red");
    p1.wypisz();
    return 0;
}