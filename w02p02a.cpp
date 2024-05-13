#include <iostream>

using namespace std;

class Test
{
public:
    Test() { cout << "Zadzialal konstruktor\n"; }
    ~Test() { cout << "Zadzialal destruktor\n"; }
};

int main()
{
    Test * t1 = new Test;
    delete t1;
    return 0;
}