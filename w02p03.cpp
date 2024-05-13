#include <iostream>

using namespace std;

class Liczba
{
private:
    int x;

public:
    Liczba(int pX) { x = pX; }
    ~Liczba() {}
    void setX(int pX) { x = pX; }
    int getX() { return x; }
};

int main()
{
    Liczba x1(202);
    cout << x1.getX();
    return 0;
}