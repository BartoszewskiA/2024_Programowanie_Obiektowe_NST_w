#include <iostream>

using namespace std;

class Osoba
{
private:
    string imie;
    int numer;

public:
    // Osoba() 
    // {
    //     imie = "NN";
    //     numer = 0;
    // }
    // Osoba(string imie, int numer)
    // {
    //     this->imie = imie;
    //     this->numer = numer;
    // }
    Osoba(string imie = "NN", int numer = 0)
    {
        this->imie = imie;
        this->numer = numer;
    }
};

int main()
{
    Osoba ktos();
    return 0;
}