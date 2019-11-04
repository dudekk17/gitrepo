/*
 * eksperyment.cpp
 */


#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
char znak;
cout << "Podaj jakieś słowo" << endl;
cin>>znak;
    
     while(znak!='.'){
        if(znak>95) 
	  	cout<<(char)(znak-32); 
	  else
        if(znak<95)
       cout << (char)(znak+32);
      else
        if(znak==32)
       cout << znak;
	
	cin>>znak; 
}

cout<<endl;

return 0;
}

