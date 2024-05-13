#include <iostream>

using namespace std;
class Test
{
public:
    Test() { cout << "zadzialal konstruktor\n"; }
    ~Test() { cout << "zadzialal destruktor\n"; }
};

void funkacja(Test &temp)
{
    cout << "funkcja\n";
}

int main()
{
    Test t1;
    funkacja(t1);
    cout<<"-------\n";
    return 0;
}