// *************************
// nazwa funkcji:          NWD
// opis funkcji:           funkcja "NWD" liczy najwiekszy wspolny dzielnik
// parametry:              parametr 'liczba1' - wymagana liczba do obliczenia NWD
//                         parametr 'liczba2' - wymagana lizcba do obliczenia NWD
// zwracany typ i opis:    int, wynik obliczania NWD
// autor:                  Ja
// **************************
#include <iostream>

using namespace std;

void NWD(int liczba1, int liczba2)
{
        while (liczba1 != liczba2)
        {
            if (liczba1 > liczba2)
            {
                liczba1 = liczba1 - liczba2;
            }
            else
            {
                liczba2 = liczba2 - liczba1;
            }
        }
     cout<<"wypisanie reszty dzielenia: "<<liczba1<<endl;
};

int main()
{
    int a, b;
    cout << "wprowadz zmienna 'a' potem zmienna 'b': ";
    cin >> a >> b;
    NWD(a, b);
    return 0;
}