#include <iostream>
 
using namespace std;
 
int main() {
 
	int codigop1, codigop2, qtd1, qtd2;
	float valor1, valor2, total;

	cin >> codigop1;
    cin >> qtd1;
	cin >> valor1;

	cin >> codigop2;
    cin >> qtd2;
	cin >> valor2;
	
	total = (qtd1 * valor1) + (qtd2 * valor2);
	
	cout << fixed;
	cout.precision(2);
	cout << "VALOR A PAGAR: R$ " << total << endl;
 
    return 0;
}