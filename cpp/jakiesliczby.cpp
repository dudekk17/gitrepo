/*
 * jakiesliczby.cpp
 * 
 * Copyright 2019 kl2ag1 <kl2ag1@ubu08>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>

using namespace std;

int main(int argc, char **argv)
{   
    int a;
    cout << "Podaj liczbę pierwszą:" << endl;
    cin >> a;
    int b;
    cout << "Podaj liczbę drugą:" << endl;
    cin >> b;
    int c;
    cout << "Podaj liczbę trzecią" << endl;
    cin >> c;
    if (a>b && b>c && a>c){
      cout << a << b << c << endl;}
        if(c>a && c>b && b>a){
            cout << c << b << a << endl;}
                if(a>b && c>a && c>b){
                   cout << c << a << b << endl;}
  
        
        	return 0;
}

