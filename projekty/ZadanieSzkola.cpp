#include <iostream>

using namespace std;
//moja wersja
class Czlowiek
{
private:
public:
    string imie, nazwisko;
    void setDane(string imie, string nazwisko);
    void getDane();
};
void Czlowiek::setDane(string fn, string sn)
{
    imie = fn;
    nazwisko = sn;
}

void Czlowiek::getDane()
{
    cout << "imie: " << imie << endl;
    cout << "nazwisko: " << nazwisko << endl;
}

class Uczen : public Czlowiek
{
public:
    int klasa;

    void setKlasa(string imie, string nazwisko, int nrKlasy);
    void getDane();
};
void Uczen::setKlasa(string imie, string nazwisko, int nrKlasy)
{
    setDane(imie, nazwisko);
    klasa = nrKlasy;
}

void Uczen::getDane()
{
    Czlowiek::getDane();
    cout << "klasa: " << klasa << endl;
}

class Nauczyciel : public Czlowiek
{
public:
    int wiek;

    void setWiek(string imie, string nazwisko, int lata);
    void getWiek();
    void getDaneA()
    {
        getDane();
        cout << "wiek" << wiek << endl;
    }
};
void Nauczyciel::setWiek(string imie, string nazwisko, int lata)
{
    setDane(imie, nazwisko);
    wiek = lata;
}

class Administracja : public Czlowiek
{
public:
    int rola;

    void setRola(string imie, string nazwisko, int corobi);
    void getRola();
};

void Administracja::setRola(string imie, string nazwisko, int corobi)
{
    setDane(imie, nazwisko);
    rola = corobi;
}

void Administracja::getRola()
{
    getDane();
    cout << "Rola: ";
    if (rola == 1)
    {
        cout << "sprzatacz";
    }
    if (rola == 2)
    {
        cout << "sekreterka";
    }
    if (rola == 3)
    {
        cout << "konserwator";
    }
}

int main()
{
    {
        cout << "Uczen: " << endl;
        Uczen uczen;
        uczen.setKlasa("Wojciech", "Nawrocki", 3);
        uczen.getDane();
    }

    {
        cout << "Nauczyciel: " << endl;
        Nauczyciel nauczyciel;
        nauczyciel.setWiek("Wojciech", "Nawrocki", 31);
        nauczyciel.getDaneA();
    }

    {
        cout << "Administracja: " << endl;
        Administracja administracja;
        administracja.setRola("Katarzyna", "Kalusza", 3);
        administracja.getDane();
    }

    return 0;
}