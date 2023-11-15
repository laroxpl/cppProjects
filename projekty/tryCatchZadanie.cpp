#include <iostream>

using namespace std;

int main()
{
    string imie;
    cin >> imie;

    try
    {
        char znak;
        int litera;
        for (int i = 0; i < imie.length(); i++)
        {
            znak = imie[i];
            litera = (int)znak;
            if (!((litera > 65 && litera < 90) || (litera > 97 && litera < 122)))
            {
                throw litera;
            }
        }
            if (imie.length() > 20)
            {
                throw znak;
            }
    }
    catch (char)
    {
        cout << "blad - wiecej niz 20 znakow (char)" << endl;
    }
    catch (int)
    {
        cout << "blad - jakis dziwny znak (int)" << endl;
    }
    catch (...)
    {
        cout << "fajno mosz" << endl;
    }

    return 0;
}