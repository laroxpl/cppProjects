//341 zd.5
#include <iostream>
using namespace std;

struct Data{
    int dd,mm,yy;
};

class Samochod{
string marka, model, nrRejestracji;
int rokProdukcji, cena; 
Data rokPierwszejRejestracji;
public:
    Samochod();
    Samochod(string pmarka,string pmodel, Data pRokPierwszejRejestracji);
    void wyswietlanie();
    ~Samochod(){
        cout<<"usuniecie za pomoca destruktora."<<endl;
    };
};
Samochod::Samochod(){
    marka = "";
    model = "";
    rokPierwszejRejestracji.dd =0;
    rokPierwszejRejestracji.mm =0;
    rokPierwszejRejestracji.yy =0;
}

Samochod::Samochod(string pmarka,string pmodel, Data pRokPierwszejRejestracji){
    marka = pmarka;
    model = pmodel;
    rokPierwszejRejestracji = pRokPierwszejRejestracji;
}

void Samochod::wyswietlanie(){
    cout<<"marka: "<< marka<<endl
        <<"model: "<< model<<endl
        <<"numer rejestracji: "<<nrRejestracji<<endl
        <<"rok produkcji: "<<rokProdukcji<<endl
        <<"cena: "<<cena<<endl
        <<"data pierwszej rejestracji: "<<rokPierwszejRejestracji.dd<<"."<<rokPierwszejRejestracji.mm<<"."<<rokPierwszejRejestracji.yy<<endl;
}


int main(){
    string marka, model; Data sData;
    cout<<"eloom, podaj jakis marka potem model ";


    return 0;
}