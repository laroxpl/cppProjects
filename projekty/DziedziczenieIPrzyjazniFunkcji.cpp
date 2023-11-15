#include <iostream>
using namespace std;

class Osoba {
    string imie = "bob";
    string nazwisko = "bob";
    friend void wypisz(Osoba o);
   
};

class Uczen : public Osoba {
    int klasa = 4;
    public:
    void wypisz1();
};

class Pracownik : public Osoba {
    string stanowisko = "nauczyciel";
    public:
    void wypisz1();
};

void Uczen::wypisz1() {
    wypisz(*this);
    cout << "klasa: " << klasa << endl;
}

void Pracownik::wypisz1() {
    wypisz(*this);
    cout << "klasa: " << stanowisko << endl;
}
void wypisz(Osoba o) {
   cout << "imie: " << o.imie<< endl;
    cout << "nazwisko: " << o.nazwisko << endl;  
}

int main() {
    Pracownik p;
    p.wypisz1();
    Uczen u;
    u.wypisz1();
    return 0;
}