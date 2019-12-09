/*
 * silnia.cpp 
 */


#include <iostream>

using namespace std;

//x0 = 1 dla =/0
//x1 = x
//xn = x * .. * x(n-czynnikow)

float potega_it(float x, int n) {
    float potega = 1;
    for (int i = 0; i < n; i++){
        potega = potega * x;
    }   
    return potega;
}  

// x0 = 1 dla x=/0
// xn = x(n-1) * x

float potega_rere(float x, int n){
    if (n == 0)
        return 1;
    else
        return potega_rere(x, n-1) * x;
    
}



int main(int argc, char **argv)
{
	float x; //podstawa
    int n; //wykladnik
    cout << "Podaj podstawę: " << endl;
    cin >> x;
    cout << "Podaj wykładnik: " << endl;
    cin >> n;
    cout << "Wynik potęgowania: "  << " " << potega_it(x, n) << endl;
    cout << "Wynik potęgowania: "  << " " << potega_rere(x, n) << endl;
	return 0;
}

