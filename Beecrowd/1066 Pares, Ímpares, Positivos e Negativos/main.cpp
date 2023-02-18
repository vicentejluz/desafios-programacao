#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, i, Pos = 0, Neg = 0, Imp = 0, Par = 0;
	
	for(i = 0; i < 5; i++){
		cin >> X;
		if(X < 0)
			Neg++;
		else if(X > 0)
			Pos++;
		if(X % 2 == 0)
			Par++;
		else
			Imp++;
	}
	
	cout << Par << " valor(es) par(es)" << endl;
	cout << Imp << " valor(es) impar(es)" << endl;
	cout << Pos << " valor(es) positivo(s)" << endl;
	cout << Neg << " valor(es) negativo(s)" << endl;
 
    return 0;
}