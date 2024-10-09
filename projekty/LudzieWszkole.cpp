#include <iostream>

using namespace std;
// moja wersja
class Czlowiek
{
private:
    string imie, nazwisko;

public:
    void setImie(string imie);
    void getImie();
    void setNazwisko(string nazwisko);
    void getNazwisko();
    void display();
};
void Czlowiek::setImie(string fn)
{
    imie = fn;
}
void Czlowiek::getImie()
{
    cout <<"imie: "<< imie<<endl;
}
void Czlowiek::setNazwisko(string sn)
{
    nazwisko = sn;
}
void Czlowiek::getNazwisko()
{
    cout <<"nazwisko: "<< nazwisko<<endl;
}
void Czlowiek::display()
{
    getImie();
    getNazwisko();
}

class Uczen : private Czlowiek
{
    int klasa;

public:
    void setKlasa(int nrKlasy);
    void getKlasa();
    void setImie(string imie);
    void getImie();
    void setNazwisko(string nazwisko);
    void getNazwisko();
    void display();
};
void Uczen::setKlasa(int nrKlasy)
{
    klasa = nrKlasy;
}
void Uczen::getKlasa()
{
    cout << "Klasa: " << klasa<<endl;
}
void Uczen::setImie(string fn)
{
    Czlowiek::setImie(fn);
}
void Uczen::getImie()
{
    Czlowiek::getImie();
}
void Uczen::setNazwisko(string sn)
{
    Czlowiek::setNazwisko(sn);
}
void Uczen::getNazwisko()
{
    Czlowiek::getNazwisko();
}
void Uczen::display()
{
    Czlowiek::display();
    getKlasa();
}

class Nauczyciel : private Czlowiek
{
public:
    int wiek;

    void setWiek(int lata);
    void getWiek();
    void setImie(string imie);
    void getImie();
    void setNazwisko(string nazwisko);
    void getNazwisko();
    void display();
};
void Nauczyciel::setWiek(int lata)
{
    wiek = lata;
}
void Nauczyciel::getWiek(){
    cout<<"wiek: "<<wiek<<endl;
}
void Nauczyciel::setImie(string fn)
{
    Czlowiek::setImie(fn);
}
void Nauczyciel::getImie()
{
    Czlowiek::getImie();
}
void Nauczyciel::setNazwisko(string sn)
{
    Czlowiek::setNazwisko(sn);
}
void Nauczyciel::getNazwisko()
{
    Czlowiek::getNazwisko();
}
void Nauczyciel::display()
{
    Czlowiek::display();
    getWiek();
}
class Administracja : private Czlowiek
{
    int rola;

public:
    void setRola(int corobi);
    void getRola();
    void setImie(string imie);
    void getImie();
    void setNazwisko(string nazwisko);
    void getNazwisko();
    void display();
};

void Administracja::setRola(int corobi)
{
    rola = corobi;
}

void Administracja::getRola()
{
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
void Administracja::setImie(string fn)
{
    Czlowiek::setImie(fn);
}
void Administracja::getImie()
{
    Czlowiek::getImie();
}
void Administracja::setNazwisko(string sn)
{
    Czlowiek::setNazwisko(sn);
}
void Administracja::getNazwisko()
{
    Czlowiek::getNazwisko();
}
void Administracja::display()
{
    Czlowiek::display();
    getRola();
}
int main()
{
    string imie, nazwisko;
    {
        cout << "Uczen: " << endl;
        Uczen uczen;
        int klasa;
        cout << "podaj imie ucznia: ";
        cin >> imie;
        uczen.setImie(imie);
        cout << "podaj nazwisko ucznia: ";
        cin >> nazwisko;
        uczen.setNazwisko(nazwisko);
        cout << "podaj klase ucznia: ";
        cin >> klasa;
        uczen.setKlasa(klasa);
        uczen.display();
    }

    {
        cout << "Nauczyciel: " << endl;
        Nauczyciel nauczyciel;
        int wiek;
        cout<<"podaj imie nauczyciela: ";
        cin>>imie;
        nauczyciel.setImie(imie);
        cout<<"podaj nazwisko nauczyciela: ";
        cin>>nazwisko;
        nauczyciel.setNazwisko(nazwisko);
        cout<<"podaj wiek nauczyciela: ";
        cin>>wiek;
        nauczyciel.setWiek(wiek);
        nauczyciel.display();
    }

    {
        cout << "Administracja: " << endl;
        Administracja administracja;
        int rola;
        cout<<"podaj imie administracji: ";
        cin>>imie;
        administracja.setImie(imie);
        cout<<"podaj nazwisko administracji: ";
        cin>>nazwisko;
        administracja.setNazwisko(nazwisko);
        cout<<"podaj role administracji (1, 2 lub 3): ";
        cin>>rola;
        administracja.setRola(3);
        administracja.display();
    }

    return 0;
}
