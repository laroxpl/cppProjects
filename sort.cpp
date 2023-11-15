#include <iostream>

using namespace std;
class selectionSort
{
public:
    void naPokazTablicy();

    void znajdz();
};

void naPokazTablicy(int a[]){
    cout << "moja tablica" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
}

void znajdz(){
    int trzym, poz = 0;
    cout << "posortowana tablica (selection sort)";
    for (int i = 0; i < 10; i++)
    {

        poz = znajdz(tablica[], a);
        trzym = a[i];
        a[i] = a[trzym];
        a[poz] = trzym;
    }
}

int* PwielkoscTablicy;

int main()
{
    cout<<"podaj ile elementow ma miec tablica: ";
    int PwielkoscTablicy;
    cin>>PwielkoscTablicy;
    cout<<    
    return 0;
}