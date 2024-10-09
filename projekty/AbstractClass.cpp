#include <iostream>
using namespace std;

class Osoba {
public:

string imie;
string nazwisko;

virtual void wyswietlDane() = 0;
};

class Pracownik : public Osoba {
public:
string stanowisko;

virtual void wyswietlDane() =0;
};
class Wychowawca : public Pracownik{
 public: 
void wyswietlDane()
{
cout << imie << " " << nazwisko << ", " << stanowisko << endl;
}   
};
class Uczen : public Osoba {
public:
string klasa;
void wyswietlDane() {
cout << imie << " " << nazwisko << ", " << klasa << endl;
}
};
int main() {
Osoba *osoba;
Wychowawca w;
osoba=&w;
osoba->imie = "Jan";
osoba->nazwisko = "Kowalski";
cout << "DANE PRACOWNIKA:" << endl;
osoba->wyswietlDane();
Uczen uczen;
uczen.imie = "Maria";
uczen.nazwisko = "Nowak";
uczen.klasa = "4A";
cout << "DANE UCZNIA:" << endl;
uczen.wyswietlDane();
return 0;
}
