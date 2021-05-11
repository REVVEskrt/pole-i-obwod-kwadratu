#include <iostream>

using namespace std;

int main()

{
    int a, p, obw;
    cout << "Pole kwadratu a*a, wprowadz a: ";
    cin >> a;
    p= a*a;
    cout << "Pole kwadratu o boku " << a << " wynosi: "<< p << endl;
    obw= 2*a;
    cout << "Obwod kwadratu o boku " << a << " wynosi: " << obw << endl;

    return 0;
}
