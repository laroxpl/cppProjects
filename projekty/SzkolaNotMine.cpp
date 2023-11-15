#include <iostream>
using namespace std;

class Osoba {
    public:
    string imie;
    string nazwisko;
    void wypisz(){//prototyp metody dla klas pochodnych
    cout << "Uczen: " << endl;
    cout << "imie: " << imie << endl;
    cout << "nazwisko: " <<nazwisko << endl;
    }
};

class Uczen : public Osoba {
    public:
    int klasa;
    void wypisz(){//najlepszy sposb implementacji prototypu
        Osoba::wypisz();
        cout<<"klasa: "<<klasa<<endl;
    
    }
};

class Nauczyciel : public Osoba {
    public:
    int wiek;
    void wypisz(){//inny sposob implementacji
    cout << "Uczen: " << endl;
    cout << "imie: " << imie << endl;
    cout << "nazwisko: " <<nazwisko << endl;
    }
};

class Administracja: public Osoba {
    public:
    string funkcja;
    void wypiszA(){//najgorszy sposob implementacji prototypu
        wypisz();
        cout<<"funkcja: "<<funkcja<<endl;
    }
};

int main() {
    Uczen u;
    u.imie = "jurek";
    u.nazwisko = "mlynarczyk";
    u.klasa = 4;
    u.wypisz();  

    Nauczyciel n;
    n.imie = "wojtek";
    n.nazwisko = "nawrocki";
    n.wiek = 34;
    n.wypisz();

    Administracja a;
    a.wypiszA();
}