#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, i, Y;
	
	cin >> X >> Y;
	
	if(X < Y){
		for(i = X + 1; i < Y; i++){
			if(i % 5 == 2 || i % 5 == 3)
				cout<< i << endl;
		}
	}
	else if(X > Y){
		for(i = Y + 1; i < X; i++){
			if(i % 5 == 2 || i % 5 == 3)
				cout << i << endl;
		}	
	}
 
    return 0;
}