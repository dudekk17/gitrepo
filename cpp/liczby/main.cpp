#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Podaj liczbę pierwszą:" <<endl;
    cin >> a;
    int b;
    cout <<"Podaj liczbę drugą:" << endl;
    cin >> b;
    int c;
    cout << "Podaj liczbę trzecią:" <<endl;
    cin >> c;
     if (a>b && b>c && a>c){
      cout << a << b << c << endl;}
        if(c>a && c>b && b>a){
            cout << c << b << a << endl;}
                if(a>b && c>a && c>b){
                   cout << c << a << b << endl;}

    return 0;
}
