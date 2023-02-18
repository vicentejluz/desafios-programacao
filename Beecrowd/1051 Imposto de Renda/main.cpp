#include <iostream>
 
using namespace std;
 
int main() {
 
	double X, imposto;
	
	cin >> X;
	cout << fixed;
	cout.precision(2);
	if(X >= 0.0 && X <= 2000.0)
		cout << "Isento" << endl;
	else if(X <= 3000.0){
		imposto = (X - 2000) * 0.08;
		cout << "R$ " << imposto << endl;
	}
	else if(X <= 4500.0){
		imposto = (X - 3000) * 0.18 + 80;
		cout << "R$ " << imposto << endl;
	}
	else{
		imposto = (X - 4500) * 0.28 + 350;
		cout << "R$ " << imposto << endl;
	}
 
    return 0;
}