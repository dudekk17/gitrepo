/*
 * zadanie_12_110.cpp
 */


#include <iostream>

using namespace std;

void bubble_sort(int tab[], int n){
    int ile = 0;
    for(int i=n-1; i>0; i--){
        for(int j=0; j<i; j++){
            if(tab[j] < tab[j+1]){
                ile++;
            }
        }    
        cout << endl;
    }
}
 int dzielniki(int p){
     for(int=1; i<p; i++){
         if(p%i==0) 
         cout << i << " " << endl;
         }
         return 0;
     }


int main(int argc, char **argv)
{
    int p;
    cout << "Podaj liczbę całkowitą: " << endl;
    cin >> p;
    dzielniki(p);
    cout << endl;
    int q = dzielnik(p);
    cout << endl;
    bubble_sort(tab2, q);

	return 0;
}

