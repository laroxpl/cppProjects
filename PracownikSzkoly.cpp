#include <iostream>
using namespace std;
class Pracownik {
 static string s_szkola;
public:
 string imie;
 string nazwisko;
 static string s_zwrocSzkola();
 static void s_ustawSzkola(string pSzkola) {
 s_szkola = pSzkola;
 }
 void wyswietlDane() {
 cout << "Imię: " << imie << endl;
 cout << "Nazwisko: " << nazwisko << endl;
 cout << "Szkoła :" << s_szkola << endl;
 }
};
string Pracownik::s_szkola = "Technikum Informatyczne";
string Pracownik::s_zwrocSzkola() {
 return s_szkola;
}
int main() {
 Pracownik pracownik1;
 pracownik1.imie = "Jan";
 pracownik1.nazwisko = "Kowalski";
 cout << "Dane pracownika: " << endl;
 cout << "Imię: " << pracownik1.imie << endl;
 cout << "Nazwisko: " << pracownik1.nazwisko << endl;
 cout << "Szkoła: " << Pracownik::s_zwrocSzkola() << endl;
 Pracownik pracownik2;
 pracownik2.imie = "Adam";
 pracownik2.nazwisko = "Nowak";
 Pracownik::s_ustawSzkola("Technikum Elektroniczne");
 cout << "Dane pracownika: " << endl;
 cout << "Imię: " << pracownik2.imie << endl;
 cout << "Nazwisko: " << pracownik2.nazwisko << endl;
 cout << "Szkoła: " << Pracownik::s_zwrocSzkola() << endl;
 return 0;
}
