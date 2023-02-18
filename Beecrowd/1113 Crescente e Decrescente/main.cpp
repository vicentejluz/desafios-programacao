#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, Y;
	
	do{
	cin >> X >> Y;
	
	if(X > Y)
		cout << "Decrescente" << endl;
	else if (X < Y)
		cout << "Crescente" << endl;
	}while(X != Y);
 
    return 0;
}