#include <iostream>

using namespace std;

class Bazowa
{
public:
    virtual void napisz()
    {
        cout << "klasa bazowa\n";
    }
};
class Pochodna : public Bazowa
{
public:
    void napisz()
    {
        cout << "klasa pochodna\n";
    }
};

int main()
{
    // Bazowa *b01 = new Bazowa;
    // Pochodna *p01 = new Pochodna;
    // b01->napisz();
    // p01->napisz();

    Bazowa *poli = new Pochodna;
    poli->napisz();

    
    // delete b01;
    // delete p01;

    delete poli;
    return 0;
}