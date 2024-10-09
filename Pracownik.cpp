#include <iostream>

using namespace std;
struct Data
{
    int day, month, year;
};

class Pracownik
{
public:
    string imie;
    string nazwisko;
    Data data_zatrudnienia;
    void wyswietlDane()
    {
        cout << "Imię: " << imie << endl;
        cout << "Nazwisko: " << nazwisko << endl;
        cout << "Dzien zatrudnienia: " << data_zatrudnienia.day << "." << data_zatrudnienia.month << "." << data_zatrudnienia.year << endl;
    }
};

int main()
{
    Pracownik *w_pracownik;
    w_pracownik = new Pracownik;
    w_pracownik->imie = "Jan";
    w_pracownik->nazwisko = "Kowalski";
    w_pracownik->data_zatrudnienia.day = 16;
    w_pracownik->data_zatrudnienia.month = 0;
    w_pracownik->data_zatrudnienia.year = 20565;

    if (w_pracownik->data_zatrudnienia.year > 2023 && w_pracownik->data_zatrudnienia.month > 2 && w_pracownik->data_zatrudnienia.day > 15)
    {
        w_pracownik->data_zatrudnienia.day = 15;
        w_pracownik->data_zatrudnienia.month = 2;
        w_pracownik->data_zatrudnienia.year = 2023;
    }

    if (w_pracownik->data_zatrudnienia.year < 1)
    {
        w_pracownik->data_zatrudnienia.year = 1;
    }
        if (w_pracownik->data_zatrudnienia.month < 1)
    {
        w_pracownik->data_zatrudnienia.month = 1;
    }
        if (w_pracownik->data_zatrudnienia.day < 1)
    {
        w_pracownik->data_zatrudnienia.day = 1;
    }
    w_pracownik->wyswietlDane();
    delete w_pracownik;
    return 0;
}
