#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, Y;
	
	do{

		cin >> X;
		cin >> Y;
	
		if(X != 0 && Y !=0){

			if(X < 0  && Y < 0)
				cout << "terceiro\n";
			else if(X < 0 && Y > 0)
				cout << "segundo\n";
			else if(Y < 0 && X > 0)
				cout << "quarto\n";
			else
				cout << "primeiro\n";
		}
	}while (X != 0 && Y != 0);
 
    return 0;
}