#include <iostream>

using namespace std;

struct RGB
{
    int R;
    int G;
    int B;
};

int main()
{
    //  statycznie
    RGB kolor1;
    kolor1.R = 40;
    kolor1.G = 69;
    kolor1.B = 54;

    cout << "R=" << kolor1.R
         << " G=" << kolor1.G
         << " B=" << kolor1.B
         << endl;

    //  dynamicznie
    RGB *kolor2 = new RGB;
    kolor2->R = 140;
    kolor2->G = 169;
    kolor2->B = 154;

    cout << "R=" << kolor2->R
         << " G=" << kolor2->G
         << " B=" << kolor2->B
         << endl;
    return 0;
}