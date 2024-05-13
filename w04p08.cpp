#include <iostream>

using namespace std;

class Test
{
private:
    int dana;

public:
    Test(int x) : dana(x) {}
    friend bool czyRowne(Test ob1, Test ob2);
};

bool czyRowne(Test ob1, Test ob2)
{
    if (ob1.dana == ob2.dana)
        return true;
    return false;
}

int main()
{
    Test obj01(3), obj02(3);
    cout << czyRowne(obj01, obj02);

    return 0;
}