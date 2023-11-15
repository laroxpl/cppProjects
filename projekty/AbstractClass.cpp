#include <iostream>
using namespace std;
// Definicja abstrakcyjnej klasy bazowej Osoba:
class Osoba {
public:
// Deklaracje zmiennych członkowskich:
string imie;
string nazwisko;
/* UWAGA
* Klasa abstrakcyjna może zawierać deklaracje zwykłych — instancyjnych zmiennych i metod członkowskich.
*/
// Deklaracja (prototyp) metody abstrakcyjnej — funkcji czysto wirtualnej:
virtual void wyswietlDane() = 0;
};
// Definicja klasy pochodnej Pracownik:
class Pracownik : public Osoba {
public:
string stanowisko;
// Definicja metody abstrakcyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
virtual void wyswietlDane() =0;
// {
// cout << imie << " " << nazwisko << ", " << stanowisko << endl;
// }

/* UWAGA
* Metoda abstrakcyjna zadeklarowana w bazowej klasie abstrakcyjnej powinna zostać zdefiniowana
* w jej klasie pochodnej.
*/
};
class Wychowawca : public Pracownik{
 // Definicja metody abstrakcyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
 public: 
void wyswietlDane()
{
cout << imie << " " << nazwisko << ", " << stanowisko << endl;
}   
};
// Definicja klasy pochodnej Uczen:
class Uczen : public Osoba {
public:
string klasa;
// Definicja metody abstrakcyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
void wyswietlDane() {
cout << imie << " " << nazwisko << ", " << klasa << endl;
}
};
int main() {
// Utworzenie obiektu pracownik jako instancji klasy pochodnej Pracownik:
// Osoba osoba;
// Pracownik pracownik; nie da sie stworzyć obiektu klasy abstrakcyjnej
Osoba *osoba;
Wychowawca w;
osoba=&w;
// Nadanie wartości zmiennym członkowskim obiektu pracownik:
osoba->imie = "Jan";
osoba->nazwisko = "Kowalski";
// osoba->stanowisko = "nauczyciel"; wskaznik jest do klasy bazowej
cout << "DANE PRACOWNIKA:" << endl;
// Wywołanie funkcji wyswietlDane() zdefiniowanej w klasie pochodnej Pracownik:
osoba->wyswietlDane();
// Utworzenie obiektu uczen jako instancji klasy pochodnej Uczen:
Uczen uczen;
// Nadanie wartości zmiennym członkowskim obiektu uczen:
uczen.imie = "Maria";
uczen.nazwisko = "Nowak";
uczen.klasa = "4A";
cout << "DANE UCZNIA:" << endl;
// Wywołanie funkcji wyswietlDane() zdefiniowanej w klasie Uczen:
uczen.wyswietlDane();
return 0;
}