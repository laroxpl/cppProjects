#include <iostream>

using namespace std;

class Samochody
{
private:
    string marka, model;
    int rok_produkcji;

public:
    Samochody();
    Samochody(string marka, string model, int rok_produkcji);
    void Display();
};
void 

class Samochody_Ciezarowe : private Samochody
{
private:
    string wywrotka, chlodnia, cysterna;
};

class Autobusy : private Samochody
{
private:
    int miejsca_stojace, miejsca_siedzace;

public:
    Autobusy();
    Autobusy();
};

int main()
{

    return 0;
}
