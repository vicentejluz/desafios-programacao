#include <iostream>
 
using namespace std;
 
int main() {
 
	int cod, qtd;
	double valor;
	
	cin >> cod;
	cin >> qtd;
	
	if(cod == 1)
		valor = qtd * 4.00;
	else if(cod == 2)
		valor = qtd * 4.50;
	else if(cod == 3)
		valor = qtd * 5.00;
	else if(cod == 4)
		valor = qtd * 2.00;
	else if(cod == 5)
		valor = qtd * 1.50;
	
	cout << fixed;
	cout.precision(2);
	cout << "Total: R$ " << valor << endl;
 
    return 0;
}