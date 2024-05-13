#include <iostream>

using namespace std;

class Liczba
{
private:
    int x;

public:
    Liczba(int x)
    {
        this->x = x;
        wypisz();
    }

    int getX() { return x; }
    void setX(int x) { this->x = x; }
    void wypisz()
    {
        cout << "x=" << x << endl;
    }
};

int main()
{
    Liczba liczba01(20);
    return 0;
}