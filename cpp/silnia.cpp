/*
 * silnia.cpp 
 */


#include <iostream>

using namespace std;

long int silnia_it(int n) {
    long int silnia = 1;
    for (int i = 2; i < n+1; i++){
        silnia = silnia * i;
    }   
    return silnia;
}    
// n! = 1 dla N={0,1}
// n! = (n-1)!*n dla N+
long int silnia_rere(int n){
    if (n == 0)
        return 1;
    else
        return silnia_rere(n-1) * n;
    
}
// n! = 1 dla n={0,1}
// n! = 1*...n dla N+-{1}
// 4! = 1*2*3*4    


int main(int argc, char **argv)
{
	int n;
    cout << "Podaj liczbę naturalną: " << endl;
    cin >> n;
    cout << "Silnia: " << silnia_it(n) << endl;
    cout << "Silnia: " << silnia_rere(n) << endl;
	return 0;
}

