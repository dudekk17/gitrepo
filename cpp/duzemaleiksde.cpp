/*

 */


#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
	
    
char znak;
cin>>znak; //wczytujemy pierwszy znak

while(znak!='.') //dopóki nie napotkamy na znak '.'
{
	if(znak>95) //gdy napotkamy małą literę zamieniamy ją na dużą
	  	cout<<(char)(znak-32); //przesuwając o 32 miejsca w kodzie ASCII
	else
		cout<<znak; 
	
	cin>>znak; //wczytujemy następny znak
}

cout<<endl;

system("pause");
	return 0;
}

