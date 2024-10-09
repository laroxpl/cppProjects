#include <iostream>
#include <cmath>
using namespace std;
template <class T> 
class Oceny
{
public:
    Oceny()
    {
        cout << "Wywołanie konstruktora klasy ogólnej ..." << endl;
    }
    T wyklad;
    T cwiczenia;
    T laboratorium;
    T seminarium;
    T srednia()
    {
        return (wyklad + cwiczenia + laboratorium + seminarium) / 4;
    }
};
template <>
class
    Oceny<double>
{
public:
    Oceny()
    {
        cout << "Wywołanie konstruktora klasy specjalizowanej ..." << endl;
    }
    double wyklad;
    double cwiczenia;
    double laboratorium;
    double seminarium;
    double srednia()
    {
        return (round(wyklad) +
                round(cwiczenia) +
                round(laboratorium) +
                round(seminarium)) /
               4;
        cout << "funkcja klasy typu double"<<endl;
    }
};
int main()
{
    Oceny<int> oceny1 = Oceny<int>(); // jawne wywołanie konstruktora domyślnego

    oceny1.wyklad = 3.5;
    oceny1.cwiczenia = 5.2;
    oceny1.laboratorium = 3.5;
    oceny1.seminarium = 5.2;
    cout << "Średnia ocen semestralnych: " << oceny1.srednia() << endl;


    Oceny<double> oceny2;

    oceny2.wyklad = 3;
    oceny2.cwiczenia = 5;
    oceny2.laboratorium = 3;
    oceny2.seminarium = 5;
    cout << "Średnia ocen semestralnych: " << oceny2.srednia() << endl;
    return 0;
}
