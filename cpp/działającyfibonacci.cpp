/*
 * działającyfibonacci.cpp 
 */


#include <iostream>

using namespace std;

int fibonacci_it(int n) {
	int a = 0; // Fn - 1
	int b = 1; // Fn - 2
	int wynik = 0;
	//if (n == 0) return 0;
	//if (n == 1) return 1;
	for (int i = 0; i < n; i++) {
		wynik = a + b; // 1 //2 //3
		b = a; // 1 //1 //2
		a = wynik; //1 //2 //3
	}
	return wynik;
}
// f(n) = 1 dla n{0, 1} 
// f(n) > 1 = f(n-1) + f(n-2)
int fibonacci_rere(int n){
    if (n < 2 )
       return 1;
    else 
       return fibonacci_rere(n-1) + fibonacci_rere(n-2);
}


int main(int argc, char **argv)
{
    for (int i=0; i < 20; i++) {
		cout << i << ": fib(" << fibonacci_it(i-2) << ", " << fibonacci_it(i-1)  << ") =" << fibonacci_it(i) << endl;
	}
    
    
	return 0;
}

