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

/*void litery2liczby(char tabzn[], int rozmiar) {
    for (int i = 0; i < rozmiar; i++){
        cout << tabzn[i] << " - " << (int)tabzn[i] << endl;    
     }
}*/

void koduj(char tabzn[], int rozmiar) {
     for (int i = 0; i < rozmiar; i++) {
        cout << tabzn[i] << " - " << (int)tabzn[i] << endl;    
   }
}   

void dekoduj(int kod[], int rozmiar, int tabzn[], int szyfr) {
     for (int i = 0; i < rozmiar; i++) {
        cout << tabzn[i] << " " << (char)tabzn[i] << endl;    
   }
} 


int main(int argc, char **argv)
{
	int rozmiar = 24;
    char tekst[rozmiar] = "Mi gato se llama Jurgen";
    
    koduj(tekst, rozmiar);
    
    //int szyfr[11] = {65, 78, 90};
    char szyfr[24]={77,105,32,103,97,116,111,32,115,101,32,108,108,97,109,97,32,74,117,114,103,101,110};

    dekoduj(szyfr, rozmiar);
    
    //ascii();
    //litery2liczby(tekst, rozmiar);
    
    return 0;
}

