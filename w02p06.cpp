#include <iostream>

using namespace std;

int x = 10;

class Liczba
{
public:
    int x;
    Liczba(int pX) { x = pX; }
    void wypisz()
    {
        cout << "Lokalne x=" << x << endl;
        cout << "Globalne x=" << ::x;
    }
};

int main()
{
    Liczba liczba01(20);
    liczba01.wypisz();
    return 0;
}