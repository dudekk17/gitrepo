/*
 * bez nazwy.cxx
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int a;
    cout << "Podaj liczbę pierwszą:" << endl;
    cin >> a;
    int b;
    cout <<"Podaj liczbę drugą:" << endl;
    cin >> b;
    int c;
    cout << "Podaj liczbę trzecią:" <<endl;
    cin >> c;
    if (a>b && b>c){
        cout << a << "" << "najwieksza" << endl;}
        else {cout << a << "" << "najmniejsza"<< endl;}
    if (c>b && b>a){
        cout << b << "" << "najwieksza" << endl;}
        else {cout << b << "" << "najmniejsza" << endl;}
        
	return 0;
}

