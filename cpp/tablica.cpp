/*
 * tablica.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int rozmiar = 20;
    int tablica[19]; // wskazuje pierwsza komorke
    int i = 0;
    cout << "Podaj 20 liczb:" << endl;
   
    for(i=0; i<rozmiar; i++){
    cin >> tablica[i];
   }
    for(i= 0 + rozmiar; i<rozmiar; i--){
    cout << tablica[i] << " ";    
        
    }
	return 0;
}

