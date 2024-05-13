
#include <iostream>
#include <ctime>

using namespace std;

class Random
{
public:
    Random() { srand(time(NULL)); }
    int nextInt()
    {
        return rand();
    }
    int nextInt(int max)
    {
        return rand() % max;
    }
    int nextInt(int min, int max)
    {
        return rand() % (max - min) + min;
    }
    double nextDouble() // 0-0,9999
    {
        return (rand() % 10000) / 10000.0;
    }
    int nextKostka()
    {
        return nextInt(1, 7);
    }
    int nextKostka(int ileScian)
    {
        return nextInt(1, ileScian + 1);
    }
};

int main()
{
    Random random;
    cout<< random.nextInt(-100,101);


    // for (int i = 0; i < 20; i++)
    // {
    //     cout << random.nextInt(100) << "\t" << random.nextInt(-100, 50) << "\t" << random.nextDouble() << "\t" << random.nextKostka() << "\t";
    // }
    return 0;
}