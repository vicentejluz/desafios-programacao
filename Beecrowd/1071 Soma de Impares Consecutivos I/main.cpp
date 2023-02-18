#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, Y, min, max, i, cont = 0;
	
	cin >> X >> Y;
	
	if(X > Y){
		max = X;
		min = Y;
	}else{
		max = Y;
		min = X;
	}
	
	for(i = min + 1; i < max; i++){
		
		if(i % 2 == 1 || i % 2 == -1){
			cont += i;
		}
	}
	cout << cont << endl;
 
    return 0;
}