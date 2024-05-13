#include <iostream>

using namespace std;

class Osoba
{
private:
    string imie;
    const int numer; // stała

public:
    Osoba(string pImie, int pNumer): imie(pImie), numer(pNumer)
    {
        // imie = pImie;
        // numer = pNumer; - błąd
    }
};

int main()
{
    Osoba ktos();
    return 0;
}