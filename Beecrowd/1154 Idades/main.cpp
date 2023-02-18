#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, cont = 0;
	double media = 0;
	
	do{
	
	cin >> X;
	
	if(X >= 0){
		media += X;
		cont++;
	}	
	
	}while(X >= 0);
	
	media /= cont;
	
	cout << fixed;
	cout.precision(2);
	cout << media << endl;
 
    return 0;
}