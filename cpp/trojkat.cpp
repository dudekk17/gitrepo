/*
 * trojkat.cpp
 *
 */


#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv)
{
	float a, b, c;
    cout << "Podaj długości boków trójkąta:"<< endl;
    cin >> a >> b >> c;
    if(a+b>c && a+c>b && b+c>a) {
       cout << "To trojkat" << endl;}
    else{cout << "otóż nie tym razem";}
    if(sqrt(a) + sqrt(b) == sqrt(c)){
    	cout <<"Trójkąt jest prostokątny" << endl;}
    else {cout << "Trójkąt nie jest prostokątny" << endl;}




	return 0;
}

