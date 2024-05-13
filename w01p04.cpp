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
    //  statycznie
    RGB kolor1;
    kolor1.losuj();
    // kolor1.R = 12222;
    kolor1.wypisz();

    //  dynamicznie
    RGB *kolor2 = new RGB;
    kolor2->losuj();
    kolor2->wypisz();

    return 0;
}