
#include <iostream>

using namespace std;

class Osoba
{
protected:
    string imie;
    string NIP;

public:
    Osoba(string im, string numer) : imie(im), NIP(numer)
    {
    }
    string toString()
    {
        return "imie: " + imie + " NIP: " + NIP;
    }
};
//----------------------------------------------------
class Pracownik : public Osoba
{
protected:
    string stanowisko;

public:
    Pracownik(string im, string numer, string st) : Osoba(im, numer), stanowisko(st)
    {
    }
    string toString()
    {
        string s = "";
        s += "PRACOWNIK: ";
        s += stanowisko;
        s += "\n";
        s += Osoba::toString();
        return s;
    }
};
//----------------------------------------------------

class Kierownik : public Osoba
{
protected:
    string dzial;

public:
    Kierownik(string im, string numer, string dz) : Osoba(im, numer), dzial(dz) {}
    string toString()
    {
        string s = "";
        s += "Kierownki dzialu:  ";
        s += dzial;
        s += "\n";
        s += Osoba::toString();
        return s;
    }
};
//----------------------------------------------------
int main()
{
    Pracownik ktos("AAAAA", "123456", "tokarka 01");
    cout << ktos.toString();
    cout << endl;

    Kierownik szef("BBB", "76544333", "IT");
    cout << szef.toString();
    return 0;
}
