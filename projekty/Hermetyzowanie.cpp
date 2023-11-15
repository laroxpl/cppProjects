#include <iostream>

using namespace std;
struct Data
{
    int dzien, miesiac, rok;
};
class Uczen
{
    string imie, nazwisko;
    Data dzienUrodzienia;

public:

    string getImie()
    {
        return imie;
    }
    string getNazwisko()
    {
        return nazwisko;
    }
    void getData(int &pDzien, int &pMiesiac, int &pRok)
    {
        pDzien = dzienUrodzienia.dzien;
        pMiesiac = dzienUrodzienia.miesiac;
        pRok = dzienUrodzienia.rok;
    }
    void setImie(string pimie)
    {
        imie = pimie;
    }
    void setNazwisko(string pnazwisko)
    {
        nazwisko = pnazwisko;
    }
    void setRok(int pDzien, int pMiesiac, int pRok)
    {
        dzienUrodzienia.dzien = pDzien;
        dzienUrodzienia.miesiac = pMiesiac;
        dzienUrodzienia.rok = pRok;
    }
};

int main()
{
    string imie, nazwisko;
    int dzien, miesiac, rok;

    Uczen *uczen = new Uczen();
    cout<<"podaj imie"<<endl;
    cin>>imie;
    cout<<"podaj nazwisko"<<endl;
    cin>>nazwisko;
    cout<<"podaj dzien"<<endl;
    cin>>dzien;
    cout<<"podaj miesiac"<<endl;
    cin>>miesiac;
    cout<<"podaj rok"<<endl;
    cin>>rok;

    uczen->setImie(imie);
    uczen->setNazwisko(nazwisko);
    uczen->setRok(dzien, miesiac, rok);

    cout<<uczen->getImie();
    cout<<uczen->getNazwisko();
    uczen->getData(dzien, miesiac, rok);
    cout<<dzien<<miesiac<<rok;
    
    return 0;
}