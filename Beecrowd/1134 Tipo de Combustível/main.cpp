#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, i, al = 0, gas = 0, diesel = 0;
	
	do{
			cin >> X;
			
			if(X == 1)
				al++;
			if(X == 2)
				gas++;
			if(X == 3)
				diesel++;
				
	}while(X != 4);
		cout << "MUITO OBRIGADO" << endl;
		cout << "Alcool: " << al << endl;
		cout << "Gasolina: "<< gas<< endl;
		cout << "Diesel: "<< diesel << endl;
 
    return 0;
}