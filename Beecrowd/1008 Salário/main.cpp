#include <iostream>
 
using namespace std;
 
int main() {
 
	int NUMBER, valor;
	double a, SALARY;
	
	cin >> NUMBER;
    cin >> valor;
    cin >> a;
	
	SALARY = valor * a;
	
	cout << "NUMBER = " << NUMBER << endl;
	cout << fixed;
	cout.precision(2);
	cout << "SALARY = U$ " << SALARY << endl;
 
    return 0;
}