#include <iostream>

using namespace std;
template <class T>
class Wazona
{
public:
    T srednia(T polski, T angielski, T informatyka, T matematyka)
    {
        cout<<" int: ";
        return ((polski * 0.1) + (angielski * 0.2) + (informatyka * 0.3) + (matematyka * 0.4) / (0.1 + 0.2 + 0.3 + 0.4));
    }
};

template <>
class Wazona<double>
{
public:
    double srednia(double polski, double angielski, double informatyka, double matematyka)
    {
        cout<<" double: ";
        return ((polski * 0.1) + (angielski * 0.2) + (informatyka * 0.3) + (matematyka * 0.4) / (0.1 + 0.2 + 0.3 + 0.4));
    }
};

int main()
{
    Wazona<int> wazonaint;
    double polski, angielski, informatyka, matma;
    cout<<"podaj polski, angielski, informatyke, matme: ";
    cin>>polski>>angielski>>informatyka>>matma;
    cout << "srednia" << wazonaint.srednia(polski, angielski, informatyka, matma)<<endl;
    Wazona<double> wazonadouble;
    cout << "srednia" << wazonadouble.srednia(polski, angielski, informatyka, matma)<<endl;
    return 0;
}
