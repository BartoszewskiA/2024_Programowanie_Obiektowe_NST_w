#include <iostream>
#include <ctime>

using namespace std;

class Liczba
{
private:
    int x;

public:
    Liczba(int pX) { x = pX; }
    ~Liczba() { cout << "OK "; }
    void setX(int pX) { x = pX; }
    int getX() { return x; }
};

int main()
{
    srand(time(NULL));
    int n;
    cout << "Ile liczb wylosowac: ";
    cin >> n;
    Liczba *tab[1000];

    for (int i = 0; i < n; i++)
        tab[i] = new Liczba(rand() % 100);

    for (int i = 0; i < n; i++)
        cout << tab[i]->getX() << " ";

    for (int i = 0; i < n; i++)
        delete tab[i];

    return 0;
}