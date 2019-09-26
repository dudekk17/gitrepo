/*
 * petle_cw1.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int suma, a;
    suma = a = 0;
    while(suma<=75){
        cout << "Podaj liczbę:" <<endl;
        cin >> a;
        suma += a;
    }
        
    cout << "Suma:"<< suma <<endl;
	return 0;
}

