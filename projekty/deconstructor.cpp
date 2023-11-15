#include <iostream>
using namespace std;
// Definicja klasy Pracownik:
class Pracownik     {
public:
 string imie;
 string nazwisko;
 // Definicje konstruktorów:
 Pracownik() {
 cout << "Komunikat kontrolny: wywołanie konstruktora domyślnego ..." 
 << endl;
 imie = "Imię domyślne";
 nazwisko = "Nazwisko domyślne";
 }; 
 Pracownik(string pImie, string pNazwisko) { 
 cout << "Komunikat kontrolny: wywołanie konstruktora parametrycznego ..."
 << endl;
 imie = pImie;
 nazwisko = pNazwisko;
 };
 // Definicja destruktora:
 ~Pracownik() {
 cout << "Komunikat kontrolny: wywołanie destruktora obiektu ..." 
 << endl;
 };
 // Definicja funkcji członkowskiej:
 void wyswietlDane() {
 cout << "Imię: " << imie << endl;
 cout << "Nazwisko: " << nazwisko << endl;
 }
};


// Destruktory mają pewne szczególne właściwości (cechy), które odróżniają je od zwykłych 
// metod członkowskich klasy, np.:
// • w klasie można zdefiniować tylko jeden destruktor,
// • destruktor nie ma żadnych parametrów (argumentów),
// Rozdział 12. t Tworzenie i inicjowanie obiektów 
// 338
// • destruktor nie zwraca do swojego otoczenia żadnej wartości,
// • destruktor nie może być zadeklarowany jako static albo const.
// Destruktory są wywoływane automatycznie w sposób niejawny w sytuacji, gdy obiekt jest 
// niszczony lub usuwany, tj.:
// • w chwili zakończenia programu (z wyjątkiem awaryjnego zabicia aplikacji),
// • w chwili zakończenia wykonywania funkcji, w której obiekt został zdefiniowany (w przypadku inicjalizacji na stosie),
// • na końcu bloku kodu, w którym obiekt został zdefiniowany (w przypadku inicjalizacji 
// na stosie),
// • w chwili wywołania operatora delete.



// Definicja zewnętrznej funkcji pomocniczej:
void funkcjaPomocnicza() {
 cout << "Komunikat kontrolny: wywołanie funkcji pomocniczej ..." << endl;
 Pracownik pracownik;
 pracownik.wyswietlDane();
}
int main() {
 { // początek bloku kodu
 // Utworzenie obiektu pracownik1 należącego do klasy Pracownik:
 Pracownik pracownik1;
 pracownik1.wyswietlDane();
 } // koniec bloku 
 /* UWAGA
 * Koniec bloku oznacza koniec życia obiektu pracownik1, 
 * co wiąże się z wywołaniem destruktora i zniszczeniem obiektu.
 */
 cout << endl;
 // Utworzenie obiektu typu Pracownik wskazywanego przez wskaźnik w_pracownik2:
 Pracownik *w_pracownik2 = new Pracownik("Jan", "Kowalski"); 
 w_pracownik2->wyswietlDane(); 
 // Usunięcie obiektu wskazywanego przez wskaźnik w_pracownik2;
 delete w_pracownik2;
 /* UWAGA
 * Użycie operatora delete spowoduje wywołanie destruktora obiektu.
 */
 cout << endl;
 // Wywołanie zewnętrznej funkcji pomocniczej:
 //wywoluje destruktor bo 'funkcjaPomocnicza' jest wywolana w scopie {}
 funkcjaPomocnicza();
 cout << endl;
 cout << "Wykonanie pozostałych instrukcji w programie ...";
 return 0;
}