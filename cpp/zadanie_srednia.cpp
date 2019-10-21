/*
 * zadanie_srednia.cpp
 */


#include <iostream>

using namespace std;

int oceny[20]; float suma=0, srednia;

int main(int argc, char **argv)
{
    for(int i=0; i<20; i++){
    int rozmiar = 2;
    int oceny[rozmiar];
    float suma = 0;
    float srednia = 0;
    for(int i=0; i<rozmiar; i++){
        cout << endl << "Podaj ocenę: ";
        cin >> oceny[i];
        suma += oceny[i];
    }
    srednia = suma / 20;
    cout << srednia << endl;

    srednia = suma / rozmiar;
    cout << "Średnia ocen: " << srednia << endl;

    }

    return 0;
}
