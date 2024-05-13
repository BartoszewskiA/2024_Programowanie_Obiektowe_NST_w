#include <iostream>

using namespace std;
class Test_02;
class Test_01
{
private:
    int dana;

public:
    Test_01(int x) : dana(x) {}
    bool czyZero(Test_02 t1)
    {
        if (dana == t1.dana)
            return true;
        return false;
    }
};

class Test_02
{
private:
    int dana;

public:
    Test_02(int x) : dana(x) {}
    friend class Test_01;
};

int main()
{

    return 0;
}