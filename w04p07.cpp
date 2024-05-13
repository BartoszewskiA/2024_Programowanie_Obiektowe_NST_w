#include <iostream>

using namespace std;

class Test
{
private:
    int dana;

public:
    Test(int x) : dana(x) {}
    // int getDana() { return dana; }
    friend bool isZero(Test obj);
    friend void wyzeruj(Test &obj);
};

bool isZero(Test obj)
{
    if (obj.dana == 0)
        return true;
    else
        return false;
}

void wyzeruj(Test &obj)
{
    obj.dana = 0;
}

int main()
{
    Test p1(10), p2(20), p3(0);
    cout << isZero(p2) << endl;
    wyzeruj(p2);
    cout << isZero(p2);
    return 0;
}