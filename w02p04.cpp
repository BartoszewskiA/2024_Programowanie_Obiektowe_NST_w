#include <iostream>
#include <ctime>

using namespace std;

class Liczba
{
private:
    int x;

public:
    Liczba()
    {
        
        x = rand() % 100;
    }
    ~Liczba() {}
    void setX(int pX) { x = pX; }
    int getX() { return x; }
};

int main()
{
    srand(time(NULL));
    int n;
    cout<<"Ile liczb wylosowac: ";
    cin>>n;
    Liczba *tab = new Liczba[n];

    for(int i=0; i<n; i++)
        cout<<tab[i].getX()<<" ";

    delete [] tab;
    return 0;
}