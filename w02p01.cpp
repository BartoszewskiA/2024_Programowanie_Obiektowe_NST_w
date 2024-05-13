#include <iostream>
#include <ctime>

using namespace std;

class Osoba
{
private:
    string imie;
    string nazwisko;
    int rok_urodzenia;

public:
    string getImie() { return imie; }
    string getNazwisko() { return nazwisko; }
    int getWiek();
    void setImie(string pImie) { imie = pImie; }
    void setNazwisko(string pNazwisko) { nazwisko = pNazwisko; }
    void setWiek(int pWiek);
};

void Osoba::setWiek(int pWiek)
{
    time_t czas_uni = time(NULL);
    tm *czas = localtime(&czas_uni);
    rok_urodzenia = (1900 + czas->tm_year) - pWiek;
}

int Osoba::getWiek()
{
    time_t czas_uni = time(NULL);
    tm *czas = localtime(&czas_uni);
    return (1900 + czas->tm_year) - rok_urodzenia;
}

int main()
{
    Osoba ktos;
    ktos.setImie("AAAAAA");
    ktos.setNazwisko("BBBBBBBB");
    ktos.setWiek(30);

    cout << ktos.getImie() << " " << ktos.getNazwisko() << " " << ktos.getWiek();
    return 0;
}