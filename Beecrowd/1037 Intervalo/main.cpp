#include <iostream>
 
using namespace std;
 
int main() {
 
	double valor;
	
	cin >> valor;
	
	if(valor >= 0 && valor <= 25.00)
		cout << "Intervalo [0,25]" << endl;
	
	else if(valor > 25.00 && valor <= 50.00)
		cout << "Intervalo (25,50]" << endl;
	
	else if(valor > 50.00 && valor <= 75.00)
		cout << "Intervalo (50,75]" << endl;
		
	else if(valor > 75.00 && valor <= 100.00)
		cout << "Intervalo (75,100]" << endl;
	
	else
		cout << "Fora de intervalo" << endl;
 
    return 0;
}