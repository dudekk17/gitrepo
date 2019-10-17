/*
 * tablica1.cpp
 */


#include <iostream>

using namespace std;

void pobierz0ceny(int t[], int r){
    cout << "Podaj "<< r <<" ocen:" << endl;
    int i;
    for (i=0; i < r; i++){
    cin >> t[i];
    }
}

void drukujTab(int t[], int r){
    int i;
    for (i=0; i < r; i++){
    cout << t[i];
    }
}

float policzsrednia(int t[], int r){
    int i;
    int suma;
    for (i=0; i < r; i++){
    
    }
    }

int main(int argc, char **argv)
{
	cout << "ile ocen podasz?" << endl;
    int rozmiar;
    cin >> rozmiar;
    int tablica[rozmiar];

    
    pobierz0ceny(tablica, rozmiar);
    drukujTab(tablica, rozmiar);
    
	return 0;
}

