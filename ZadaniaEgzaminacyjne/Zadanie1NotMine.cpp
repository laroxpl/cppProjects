#include <iostream>
#include <cstring>
using namespace std;

void szyfr(char tekst[]) {
    char gadery[] = {'g', 'a',  'd', 'e',  'r', 'y',  'p', 'o',  'l', 'u',  'k', 'i'};
    char wyjsice[strlen(tekst)+1];
    wyjsice[strlen(tekst)] = 0;
    bool zawieraZnak = false;
    for (int i =0; i < strlen(tekst); i++) {
        zawieraZnak = false;
        for (int i1 =0; i1< 12; i1++) {
            if (gadery[i1] == tekst[i]) {
                
                //cout << "zmiana " << tekst[i] << " na " << gadery[i1+((i1%2) ? -1 : 1)] << endl;
                wyjsice[i] = gadery[i1+((i1%2) ? -1 : 1)];
                zawieraZnak = true;
            }
        }
        if (zawieraZnak == false) {
            wyjsice[i] = tekst[i];
        }
        tekst[i] = wyjsice[i];
    }
}

int main() {
    char tekst[20];
    cout << "wpisz tekst: ";
    cin >> tekst;
    szyfr(tekst);
    cout << "wyjscie: " << tekst << endl;
    return 0;
}