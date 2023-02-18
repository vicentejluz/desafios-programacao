#include <iostream>
 
using namespace std;
 
int main() {
 
	double Sal, imposto;
	
	cin >> Sal;
	
	cout << fixed;
	cout.precision(2);
	if (Sal >= 0.0 && Sal <= 400.0) {
		imposto = Sal * 0.15;
		Sal = Sal + imposto;
		cout << "Novo salario: " << Sal << endl;
		cout << "Reajuste ganho: " << imposto << endl;
		cout << "Em percentual: 15 %" << endl;
	}
	else if (Sal <= 800.0) {
		imposto = Sal * 0.12;
		Sal = Sal + imposto;
		cout << "Novo salario: " << Sal << endl;
		cout << "Reajuste ganho: " << imposto << endl;
		cout << "Em percentual: 12 %" << endl;
	}
	else if (Sal <= 1200.0) {
		imposto = Sal * 0.10;
		Sal = Sal + imposto;
		cout << "Novo salario: " << Sal << endl;
		cout << "Reajuste ganho: " << imposto << endl;
		cout << "Em percentual: 10 %" << endl;
	}
	else if (Sal <= 2000.0) {
		imposto = Sal * 0.07;
		Sal = Sal + imposto;
		cout << "Novo salario: " << Sal << endl;
		cout << "Reajuste ganho: " << imposto << endl;
		cout << "Em percentual: 7 %" << endl;
	}
	else {
		imposto = Sal * 0.04;
		Sal = Sal + imposto;
		cout << "Novo salario: " << Sal << endl;
		cout << "Reajuste ganho: " << imposto << endl;
		cout << "Em percentual: 4 %" << endl;
	}
 
    return 0;
}