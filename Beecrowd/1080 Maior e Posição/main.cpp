#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, maior = 0, i, cont = 0;
	
	for(i = 1; i <= 100; i++){
		cin >> X;
		if (i == 1) {
      		maior = X;
    	}
		else{
			if(X > maior){
				maior = X;
				cont = i;
			}
		}
	}
	cout << maior << endl;
	cout << cont << endl;
 
    return 0;
}