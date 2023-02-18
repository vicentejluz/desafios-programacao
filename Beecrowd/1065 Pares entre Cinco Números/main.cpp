#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, i, Par = 0;
	
	for(i = 0; i < 5; i++){
		cin >> X;
		if(X % 2 == 0)
			Par++;
	}
	
	cout << Par << " valores pares" << endl;
 
    return 0;
}