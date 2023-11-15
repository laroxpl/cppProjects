#include <iostream>
using namespace std;

class Osoba {
    string imie = "bob";
    string nazwisko = "bob";
    friend class Uczen;
    friend class Pracownik;
};

class Uczen : public Osoba {
    int klasa = 4;
    public:
    void wypisz();
};

class Pracownik : public Osoba {
    string stanowisko = "nauczyciel";
    public:
    void wypisz();
};

void Uczen::wypisz() {
    cout << "imie: " << imie << endl;
    cout << "nazwisko: " << nazwisko << endl;
    cout << "klasa: " << klasa << endl;
}

void Pracownik::wypisz() {
    cout << "imie: " << imie << endl;
    cout << "nazwisko: " << nazwisko << endl;
    cout << "klasa: " << stanowisko << endl;
}

int main() {
    Pracownik p;
    p.wypisz();
    Uczen u;
    u.wypisz();
    return 0;
}