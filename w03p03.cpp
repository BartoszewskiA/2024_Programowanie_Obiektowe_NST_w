#include <iostream>

using namespace std;

class Osoba
{
private:
    string nazwisko;
    int wiek;

public:
    Osoba(string pNazwisko, int pWiek) : nazwisko(pNazwisko), wiek(pWiek) {}
    string getNazwisko() { return nazwisko; }
    void setNazwisko(string nazwisko) { this->nazwisko = nazwisko; }
    int getWiek() { return wiek; }
    void setWiek(int wiek) { this->wiek = wiek; }
};

void RODO(Osoba &p)
{
    string temp = p.getNazwisko();
    for (int i = 1; i < temp.length(); i++)
        temp[i] = '*';
    p.setNazwisko(temp);
}

int main()
{
    Osoba ktos("Kowalski", 40);
    cout << "Przed: " << ktos.getNazwisko() << " " << ktos.getWiek() << endl;
    RODO(ktos);
    cout << "Po: " << ktos.getNazwisko() << " " << ktos.getWiek() << endl;
    return 0;
}