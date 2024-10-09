#include <iostream>
using namespace std;
template <typename T,typename R>
T polePr(T pBok1, R pBok2) {
return (pBok1 * pBok2);
}

template <typename T>
T obwodPr(T pBok1, T pBok2) {
return (2 * pBok1 + 2 * pBok2);
}
int main() {
float bok1 {1.5}, bok2 {2.5};
cout << "Pole wynosi " << polePr<float,int>(bok1,bok2) << endl;
cout << "Obwód wynosi " << obwodPr<int>(bok1, bok2) << endl;

cout << endl;
cout << "Pole wynosi " << polePr(bok1, bok2) << endl;
cout << "Obwód wynosi " << obwodPr(bok1, bok2) << endl;

return 0;
}
