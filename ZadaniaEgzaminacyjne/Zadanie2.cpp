// *************************
// nazwa funkcji:          NWD
// opis funkcji:           funkcja "Notatka()" wypisuje dane podane przez uzytkownika
// parametry:              parametr 'ptytulnotatki' - bierze dane od uztkownika i wstawia je do zmiennych klasy
//                         parametr 'ptrescNotatki' - bierze dane od uztkownika i wstawia je do zmiennych klasy
// zwracany typ i opis:    string, Dane podane przez uzytkownika
// autor:                  Ja, a myslales ze kto?
// **************************


#include <iostream>

using namespace std;

class Notatka{
private:
    int liczbaNotatek, IDnotatki;
protected:
    string tytulNotatki, trescNotatki;
public:
    
    Notatka(string ptytulNotatki, string ptrescNotatki){
        liczbaNotatek++;
        IDnotatki=liczbaNotatek+1;
        tytulNotatki = ptytulNotatki;
        trescNotatki = ptrescNotatki;
    }

    void wypiszZawartosc(){
        cout<<"tytul: "<<tytulNotatki<<endl;
        cout<<"tresc: "<<trescNotatki<<endl;
    }
    void wypiszWszystko(){
        cout<<liczbaNotatek++<<";";
        cout<<IDnotatki<<";";
        cout<<tytulNotatki<<";";
        cout<<trescNotatki<<";"<<endl;
    }

};

int main(){
    string tytulNotatki, trescNotatki;

    cout<<"podaj tytul notatki: ";
    cin>>tytulNotatki;
    cout<<"podaj tresc notatki: ";
    cin>>trescNotatki;

    Notatka Notatka1(tytulNotatki, trescNotatki);

    cout<<"podaj tytul notatki: ";
    cin>>tytulNotatki;
    cout<<"podaj tresc notatki: ";
    cin>>trescNotatki;

    Notatka Notatka2(tytulNotatki, trescNotatki);

    cout<<"wypisanie dane notatki pierwszej: "<<endl;
    Notatka1.wypiszZawartosc();
    cout<<"wypisanie zawartosci notatki za pomoca metody diagnostycznej: "<<endl;
    Notatka1.wypiszWszystko();

    cout<<"wypisanie dane notatki drugiej: "<<endl;
    Notatka2.wypiszZawartosc();
    cout<<"wypisanie zawartosci notatki za pomoca metody diagnostycznej: "<<endl;
    Notatka2.wypiszWszystko();


    return 0;
}