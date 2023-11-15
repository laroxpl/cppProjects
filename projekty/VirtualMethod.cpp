#include <iostream>
using namespace std;
class Zwierze {
    public:
    int waga = 18;
    virtual void wyswietl();
};

class Ssak : public Zwierze {
    public:
    int wiek = 10;
    void wyswietl();
};

class Kot : public Ssak {
    public:
    string kolor = "czarny";
    void wyswietl();
};

void Zwierze::wyswietl() {
    cout << "Zwierze: " << endl;
    cout << "waga: " << waga << endl;
}

void Ssak::wyswietl() {
    cout << "Ssak: " << endl;
    cout << "waga: " << waga << endl;
    cout << "wiek: " << wiek << endl;
}

void Kot::wyswietl() {
    cout << "Kot: " << endl;
    cout << "waga: " << waga << endl;
    cout << "wiek: " << wiek << endl;
    cout << "kolor: " << kolor << endl;
}

int main() {
    Zwierze *z = new Zwierze();
    z->wyswietl();
    delete z;
    z = new Ssak();
    z->wyswietl();
    delete z;
    z = new Kot();
    z->wyswietl();
    delete z;
    return 0;
}

// Przy powyższej konstrukcji to my decydujemy jaka metoda jest przesłaniana. Bez virtual przesłaniamy metody klas pochodnych metodą klasy bazowej.  Z virtual jest odwrotnie.
// Przesłaniamy metodę klasy bazowej metodami odpowiednich klas pochodnych.