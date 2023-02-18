#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, Y, T;
	
	cin >> X;
	cin >> Y;
	
	if(X == Y)
		cout << "O JOGO DUROU 24 HORA(S)" << endl;
	
	if(X > Y){
		T = 24 - X + Y;
		cout << "O JOGO DUROU " << T << " HORA(S)" << endl;
	}
	
	if(X < Y){
		T = Y - X;
		cout << "O JOGO DUROU " << T << " HORA(S)" << endl;
	}
 
    return 0;
}