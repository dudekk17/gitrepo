/*
 * funkcje.cpp
 */


#include <iostream>

using namespace std;

void sumuj (int a, int b) {
    cout << "Suma: " << a+b << endl; 
    
}
void podziel (int a, int b) {
    if (b != 0)
        cout << "Iloraz: " << (float)a/(float)b << endl; 
    else 
        cout << "Błąd" << endl;
}


int pomnoz(int a, int b) {
    return a*b;
}

int odejmij(int a, int b) {
    return a-b;
}
// rzutowanie typu (ang.casting) - dynamiczna zmiana typu zmiennej
// (float)a

int main(int argc, char **argv)
{
	int a, b;
    cout <<"Podaj liczby: " << endl;
    cin >> a >> b;
    //podziel(a, b);
    //podziel(b, a);
    //cout << "Iloczyn: " << pomnoz(a, b) << endl;
    //int wynik;
    //wynik = pomnoz(a, b);
	//cout << "Iloczyn: " << wynik;
    cout << "Różnica: " << odejmij(a,b) << endl;
    return 0;
}

