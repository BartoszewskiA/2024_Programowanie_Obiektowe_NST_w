#include <iostream>
#include <string>

using namespace std;

class Osoba
{
protected:
    string imie;
    string nazwisko;

public:
    Osoba(string im = "", string nazw = "") : imie(im), nazwisko(nazw) {}
    virtual void wypisz()
    {
        cout << "Imie: " << imie
             << "  Nazwisko: " << nazwisko << endl;
    }
    virtual void wczytaj()
    {
        cout << "Podaj imie: ";
        getline(cin, imie);
        cout << "Podaj nazwisko: ";
        getline(cin, nazwisko);
    }
};
//--------------------------------------------------------
class Student : public Osoba
{
protected:
    string grupa;

public:
    Student(string im = "", string nazw = "", string gr = "L1") : Osoba(im, nazw), grupa(gr) {}
    void wypisz()
    {
        cout << "Imie: " << imie
             << "  Nazwisko: " << nazwisko
             << "  Grupa: " << grupa << endl;
    }
    void wczytaj()
    {
        cout << "Podaj imie: ";
        getline(cin, imie);
        cout << "Podaj nazwisko: ";
        getline(cin, nazwisko);
        cout << "Podaj grupe: ";
        getline(cin, grupa);
    }
};
//--------------------------------------------------------
class Wykladowca : public Osoba
{
protected:
    string katedra;

public:
    Wykladowca(string im = "", string nazw = "", string k = "L1") : Osoba(im, nazw), katedra(k) {}
    void wypisz()
    {
        cout << "Imie: " << imie
             << "  Nazwisko: " << nazwisko
             << "  Katedra: " << katedra << endl;
    }
    void wczytaj()
    {
        cout << "Podaj imie: ";
        getline(cin, imie);
        cout << "Podaj nazwisko: ";
        getline(cin, nazwisko);
        cout << "Podaj katedre: ";
        getline(cin, katedra);
    }
};
//--------------------------------------------------------

const int ILE = 3;
int main()
{
    Osoba *tab[3];
    tab[0] = new Wykladowca;
    tab[0]->wczytaj();
    for (int i = 1; i < ILE; i++) // 1 osoba to wykladowca
    {
        tab[i] = new Student;
        tab[i]->wczytaj();
    }
    for (int i = 0; i < ILE; i++)
    {
        tab[i]->wypisz();
    }
    for (int i = 0; i < ILE; i++)
    {
        delete tab[i];
    }
    return 0;
}