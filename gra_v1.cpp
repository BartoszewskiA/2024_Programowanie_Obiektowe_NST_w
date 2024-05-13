#include <iostream>
#include <ctime>
#include <cmath>
#include <sstream>

using namespace std;
const int ZYCIE = 100;
const int PUNKTY = 30;
//-------------------------------------------------
class Cios
{
public:
    int atak_fizyczny;
    int atak_magiczny;
    bool podstepny_cios;
};
//---------------------------------------------------
class Postac
{
private:
    string imie;
    int zycie;
    int atak_fizyczny;
    int atak_magiczny;
    int obrona_fizyczna;
    int obrona_magiczna;
    double procentGauss(int skupienie) // <0,1>
    {
        double wynik = 0.0;
        for (int i = 0; i < skupienie; i++)
            wynik += rand() % 101;
        return (wynik / skupienie) / 100.0;
    }

public:
    Postac(string im) : imie(im), zycie(ZYCIE)
    {
        int obrona;
        int atak;
        obrona = round(PUNKTY * procentGauss(2));
        atak = PUNKTY - obrona;
        obrona_fizyczna = round(obrona * procentGauss(2));
        obrona_magiczna = obrona - obrona_fizyczna;
        atak_fizyczny = round(atak * procentGauss(2));
        atak_magiczny = atak - atak_fizyczny;
    }
    string przedstaw_sie()
    {
        stringstream temp;
        temp << "\nImie: " << imie
             << " Zycie: " << zycie << endl
             << "Atak fizyczny: " << atak_fizyczny
             << " Atak Magiczny: " << atak_magiczny << endl
             << "Obrona fizyczna: " << obrona_fizyczna
             << " Obrona magiczna: " << obrona_magiczna << endl;
        return temp.str();
    }
    bool czy_zyje()
    {
        if (zycie > 0)
            return true;
        return false;
    }

    Cios zadaj_cios()
    {
        Cios c;
        c.atak_fizyczny = round(atak_fizyczny * procentGauss(2));
        c.atak_magiczny = round(atak_magiczny * procentGauss(2));
        if (rand() % 6 + 1 == 6)
            c.podstepny_cios = true;
        else
            c.podstepny_cios = false;
        return c;
    }
    void przyjecie_ciosu(Cios c)
    {
        int obrazenia_fizyczne = 0;
        int obrazenia_magiczne = 0;
        if (c.podstepny_cios)
        {
            obrazenia_fizyczne = c.atak_fizyczny;
            obrazenia_magiczne = c.atak_magiczny;
        }
        else
        {
            obrazenia_fizyczne = c.atak_fizyczny - round(obrona_fizyczna * procentGauss(2));
            obrazenia_magiczne = c.atak_magiczny - round(obrona_magiczna * procentGauss(2));
            if (obrazenia_fizyczne < 0)
                obrazenia_fizyczne = 0;
            if (obrazenia_magiczne < 0)
                obrazenia_magiczne = 0;
        }
        zycie = zycie - (obrazenia_fizyczne + obrazenia_magiczne);
    }
};
//-------------------------------------------------------------------------
void ring(Postac &g1, Postac &g2)
{
    Cios c;
    int runda = 0;
    cout << g1.przedstaw_sie();
    cout << g2.przedstaw_sie();
    while (g1.czy_zyje() && g2.czy_zyje() && ++runda < 100)
    {
        c = g1.zadaj_cios();
        g2.przyjecie_ciosu(c);
        c = g2.zadaj_cios();
        g1.przyjecie_ciosu(c);
    }
    cout << "\nRund: " << runda << "\n";
    cout << g1.przedstaw_sie();
    cout << g2.przedstaw_sie();
}

int main()
{
    srand(time(NULL));
    Postac gracz1("Conan");
    Postac gracz2("Geralt");
    ring(gracz1, gracz2);
    return 0;
}