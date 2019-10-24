/*
 * tablica2w.cpp 
 * czas uniksowy liczba sekund ktora uplynela od 1 stycznia 1970
 */


#include <iostream>
#include <iomanip>

using namespace std;

#define N   10  // stałe sa zdefiniowane duzymi literami
#define M   10  // zmienne małymi

int main(int argc, char **argv)
{
	int tab2W[N][M];
    int i, j;
    
    srand (time(NULL)); // inicjacja generatora liczb pseudolosowych
      
    for (i=0; i < N; i++) {
         //cout << "~~~~~Tablica " << i << "~~~~~" << endl;
         for(j=0; j < M; j++) {
          //cout << i << "-" << j << endl;
          tab2W[i][j] = rand() % 10;
          cout << setw(4) << tab2W[i][j] << " ";
       }
       cout << endl;
    }
    
	return 0;
}

