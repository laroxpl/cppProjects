#include <iostream>

using namespace std;

class Pracownik
{
public:
    string imie;
    string nazwisko;
    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
    }
};

int main(){
 
 // Utworzenie obiektu pracownik należącego do klasy Pracownik:

 // Deklaracja i inicjalizacja zmiennej wskaźnikowej (wskaźnika) w_pracownik na dowolny obiekt należący 
 // do typu Pracownik:
 Pracownik *w_pracownik;
 // Przypisanie wskaźnikowi w_pracownik adresu obiektu pracownik:
 w_pracownik = new Pracownik;
 // Nadanie wartości zmiennym członkowskim obiektu pracownik:
 w_pracownik->imie = "Jan";
 w_pracownik->nazwisko = "Kowalski";
 // Prezentacja danych zapisanych w zmiennych członkowskich obiektu pracownik na ekranie monitora:
 w_pracownik->wyswietlDane();
 return 0;

}