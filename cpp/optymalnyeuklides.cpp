/*
 * optymalnyeuklides.cpp
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{   
    int a, b;
    cout << "Podaj pierwszą liczbę: " << endl;
    cin >> a;
    cout << "Podaj drugą liczbę; " << endl;
    cin >> b;
    
    
    while(a>0){
         if(a>0){
            a = a % b;
            b = b - a;    
            cout << "NWD:" << b << endl;
         }    
         else
         cout << b << endl;
    }
	
	return 0;
}

