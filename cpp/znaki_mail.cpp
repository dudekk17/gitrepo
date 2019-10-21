/*
 * znaki_mail.cpp
 */


#include <iostream>

using namespace std;


void ascii() {
    int i = 0;
    for (i = 65; i < 91; i++){
        cout << i << " - " << char(i) << endl;    
     }
} 

void litery2liczby(char tabzn[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++){
        cout << tabzn[i] << " - " << (int)tabzn[i] << endl;    
     }
}

void koduj(char tabzn[], int rozmiar) {
     for (int i = 0; i < rozmiar; i++) {
        cout << tabzn[i] << " - " << (int)tabzn[i] << endl;    
   }
}   

void dekoduj(int kod[], int rozmiar) {
     for (int i = 0; i < rozmiar; i++) {
        cout << (char)kod[i] << " " << endl;    
   }
} 


int main(int argc, char **argv)
{
	int rozmiar = 14;
    char tekst[rozmiar] = "Koty sa super";
    
    //koduj(tekst, rozmiar);
    
    //int szyfr[11] = {65, 78, 90};
    
    //dekoduj(szyfr, rozmiar);
    
    //ascii();
    litery2liczby(tekst, rozmiar);
    
    return 0;
}

