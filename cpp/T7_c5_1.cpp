/*
 * T7_c5_1.cpp 
 */


#include <iostream>

using namespace std;

int i, n, p1, p2, fib;

int main()
{
    cout << "Podaj n: ";
    cin >> n;
    p1, p2=1;
    fib=0;
    for(i=1; i<=n; i++)
	{
		fib=p1+p2;
		p2=p1;
		p1=fib;
	}
	cout << "F(" << n << ")=" << fib << endl;
    return 0;
}

