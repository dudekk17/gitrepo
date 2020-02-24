/*
 * szyfr_cezara.cpp
 */


#include <iostream>

using namespace std;

void duze_male(char t[]){
    int i=0;
    while (t[i] != '\0'){
        if ((int)t[i]>64 && (int)t[i]<91){
            t[i] = (char)((int)t[i]+32);
        }
        i++;
    }
}

void szyfruj(char t[], int k){
    int i=0;
    int kod=0;
    while (t[i] != '\0'){
        kod = (int)t[i] + k;
        t[i] = (char) kod;
        if (kod > 122){
            
        }
        t[i] = (char)kod;
        i++;
    }
}

void deszyfruj(char t[], int k){
    int i=0;
    int kod=0;
    while(t[i] != '\0'){
        kod = (int)t[i] - k;
        cout << kod << endl;
        if (kod < 97){
            kod += 26;
        }
        t[i] = (char)kod;
        i++;
    }
}

int main(int argc, char **argv)
{
    int r = 20;
    char tekst[r];
    cout << "Wprowadź tekst:" << endl;
    cin.getline(tekst, r);
    duze_male(tekst);
    int klucz=0;
    cout << "Podaj klucz:" << endl;
    cin >> klucz;
    klucz = klucz % 26;
    szyfruj(tekst, klucz);
    cout<< tekst<< endl;
    deszyfruj(tekst, klucz);
    cout<< tekst<< endl;
    
	return 0;
}

