/*
 * cwtab4.cpp
 */


#include <iostream>
#include <cstring>

#define ROZMIAR 100

using namespace std;

int main(int argc, char **argv)
{
	char tekst[ROZMIAR];
    cout << "Podaj tekst" << endl;
    cin.getline(tekst, ROZMIAR);
    cout << strlen(tekst) << endl;
    
	return 0;
}

