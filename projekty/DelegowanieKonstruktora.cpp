#include <iostream>
using namespace std; 
class Prostokat {
private:
 double bok1; 
 double bok2;
 string kolor;
public: 
 Prostokat();
 Prostokat(double, double);
 void ustawKolor(string);
 void wyswietlDane();
}; 
Prostokat::Prostokat() {
 cout << "Komunikat kontrolny: został wywołany konstruktor domyślny ..." 
 << endl;
 kolor = "biały"; 
}
Prostokat::Prostokat(double pBok1, double pBok2) : Prostokat::Prostokat() {
 cout << "Komunikat kontrolny: został wywołany konstruktor parametryczny ..." 
 << endl;
 bok1 = pBok1;
 bok2 = pBok2;
}
void Prostokat::ustawKolor(string pKolor) {
 kolor = pKolor;
}
void Prostokat::wyswietlDane() {
 cout << "Pierwszy bok: " << bok1 << endl;
 cout << "Drugi bok: " << bok2 << endl;
 cout << "Kolor: " << kolor << endl;
}
int main() {
 Prostokat p1;
 p1.wyswietlDane();
 cout << endl;
 
 Prostokat p2(1, 2);
 p2.wyswietlDane();
 p2.ustawKolor("czarny");
 p2.wyswietlDane();
 return 0;
}
