#include <iostream>
#include <ctime>

using namespace std;

class RGB
{
private:
    int R;
    int G;
    int B;

public:
    void losuj();
    void wypisz();
};

void RGB::losuj()
{
    R = rand() % 256;
    G = rand() % 256;
    B = rand() % 256;
}

void RGB::wypisz()
{
    cout << "R=" << R
         << " G=" << G
         << " B=" << B
         << endl;
}

int main()
{
    srand(time(NULL));
    int n;
    cout << "Ile kolorow wyklosowac: ";
    cin >> n;
    RGB *tab = new RGB[n];
    for(int i=0; i<n; i++)
        tab[i].losuj();

    for (int i = 0; i < n; i++)
        tab[i].wypisz();
    delete [] tab;
    return 0;
}