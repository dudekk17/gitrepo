/*
 * euklides2.cpp
 */


#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int a, b, i;
    a = b = i = 0;
    cout <<"Podaj dwie liczby całkowite: " << endl;
    cin >> a >> b;
    while(a != b){
    i++;
    if (a>b)
        a = a - b;
    else 
        b = b - a;
    }
    cout << "NWD:" << a << endl;
    cout << "Powtórzeń:" << i << endl;
    
    
	return 0;
}

