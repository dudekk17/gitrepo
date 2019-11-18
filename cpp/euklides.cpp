/*
 * euklides.cpp 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	int a,b;
    cout << "Podaj pierwszą liczbę: " << endl;
    cin >> a;
    cout << "Podaj drugą liczbę: " << endl;
    cin >> b;
    
    while( a!=b){
        if(a>b){
           cout << "NWD: " << endl;
           a = a - b;
         }
        else{
            cout << "NWD: " << endl;
            b = b - a   ; 
            }
        if(a==b){
           cout << a << endl;
        }
    }
	return 0;
}

