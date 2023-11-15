#include <iostream>
using namespace std;

class klasaBazwowa
{
private:
    string czlowiek = "ja";

protected:
    string ludz = "ty";

public:
    string osoba = "on";

    string getCzlowiek()
    {
        return czlowiek;
    }
    string getLudz()
    {
        return ludz;
    }
    string getOsoba()
    {
        return osoba;
    }

    void setCzlowiek(string pczlowiek)
    {
        czlowiek = pczlowiek;
    }
    void setLudz(string pludz)
    {
        ludz = pludz;
    }
    void setOsoba(string posoba)
    {
        osoba = posoba;
    }
};

class klasaPochodnaPublic : public klasaBazwowa
{
private:
    string liczba1 = "1";

protected:
    string liczba2 = "2";

public:
    string liczba3 = "3";

    string getLiczba1()
    {
        return liczba1;
    }
    string getLiczba2()
    {
        return liczba2;
    }
    string getLiczba3()
    {
        return liczba3;
    }
    string gettCzlowiek(){
        return getCzlowiek();
    }

    void setLiczba1(string pliczba1)
    {
        liczba1 = pliczba1;
    }
    void setLiczba2(string pliczba2)
    {
        liczba2 = pliczba2;
    }
    void setLiczba3(string pliczba3)
    {
        liczba3 = pliczba3;
    }
    void settCzlowiek(string pczlowiek)
    {
        setCzlowiek(pczlowiek);
    }
    void settLudz(string pludz)
    {
        pludz = "jakitam ludz";
        setLudz(pludz);
    }

    void getData()
    {
        cout << "klasa pochodna public: " << endl;
        cout << "czlowiek: nie mozna bo jest prywatna" << endl;
        cout << "ludz: " << ludz << endl;
        cout << "osoba: " << osoba << endl;
    }
};

class klasaPochodnaProtected : protected klasaBazwowa
{
private:
    string liczba1 = "1";

protected:
    string liczba2 = "2";

public:
    string liczba3 = "3";

    string getLiczba1()
    {
        return liczba1;
    }
    string getLiczba2()
    {
        return liczba2;
    }
    string getLiczba3()
    {
        return liczba3;
    }
    string gettLudz()
    {
        return ludz;
    }

    void setLiczba1(string pliczba1)
    {
        liczba1 = pliczba1;
    }
    void setLiczba2(string pliczba2)
    {
        liczba2 = pliczba2;
    }
    void setLiczba3(string pliczba3)
    {
        liczba3 = pliczba3;
    }
    void settLudz(string pludz)
    {
        setLudz(pludz);
    }

    void getData()
    {
        cout << "klasa pochodna protected: " << endl;
        cout << "czlowiek: nie mozna bo jest prywatna" << endl;
        cout << "ludz: " << ludz << endl;
        cout << "osoba: " << osoba << endl;
    }
};

class klasaPochodnaPrivate : private klasaBazwowa
{
private:
    string liczba1 = "1";

protected:
    string liczba2 = "2";

public:
    string liczba3 = "3";

    string getLiczba1()
    {
        return liczba1;
    }
    string getLiczba2()
    {
        return liczba2;
    }
    string getLiczba3()
    {
        return liczba3;
    }
    string gettOsoba()
    {
        return osoba;
    }

    void setLiczba1(string pliczba1)
    {
        liczba1 = pliczba1;
    }
    void setLiczba2(string pliczba2)
    {
        liczba2 = pliczba2;
    }
    void setLiczba3(string pliczba3)
    {
        liczba3 = pliczba3;
    }
    void settOsoba(string posoba)
    {
        setOsoba(posoba);
    }

    void getData()
    {
        cout << "klasa pochodna private: " << endl;
        cout << "czlowiek: nie mozna bo jest prywatna" << endl;
        cout << "ludz: " << ludz << endl;
        cout << "osoba: " << osoba << endl;
    }
};

int main()
{
    string czlowiek, ludz, osoba, liczba1, liczba2, liczba3;

    klasaPochodnaPrivate kpPrivate;
    klasaPochodnaProtected kpProtected;
    klasaPochodnaPublic kpPublic;

    czlowiek = "byl sobie czlowiek";
    kpPublic.settCzlowiek(czlowiek);
    cout << "zmieniona prywatna zawartosc z klasy bazowej przy pomocy settera z klasy pochodnej: " << kpPublic.gettCzlowiek() << endl;

    ludz = "byl sobie ludz";
    kpProtected.settLudz(ludz);
    cout << "zmieniona protected zawartosc z klasy bazowej przy pomocy settera z klasy pochodnej: " << kpProtected.gettLudz() << endl;

    osoba = "byl sobie osoba";
    kpPrivate.settOsoba(osoba);
    cout << "zmieniona public zawartosc z klasy bazowej przy pomocy settera z klasy pochodnej: " << kpPrivate.gettOsoba() << endl;

    kpPublic.getData();
    kpProtected.getData();
    kpPrivate.getData();

    return 0;
}