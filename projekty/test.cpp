#include <iostream>
using namespace std;
// Definicja klasy Pracownik:
class Pracownik
{

    string imie;
    public:
    // Definicje konstruktorów:
    Pracownik()
    {
        cout << "Komunikat kontrolny: wywołanie konstruktora domyślnego ..."
             << endl;
              
    };
    Pracownik(string pImie)
    {
        cout << "Komunikat kontrolny: wywołanie konstruktora parametrycznego ..."
             << endl;
        imie = pImie;
    };
    // Definicja destruktora:
    ~Pracownik()
    {
        cout << "Komunikat kontrolny: wywołanie destruktora obiektu ..."
             << endl;
    };
    // Definicja funkcji członkowskiej:
    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        
    }
    string getImie(){
        return imie;
    }
    void getImie(string &pimie){
        pimie= imie;
    }
    void setImie(string pimie){
        imie=pimie;
    }
};


int main()
{
    string imie;
    Pracownik *pracownik=new Pracownik("jano");
   cout<<pracownik->getImie()<<endl;
   pracownik->setImie("jano1");
   pracownik->getImie(imie);
   cout<<imie;
    return 0;
}