#include <iostream>
#include <math.h> 
using namespace std;
 
int main() {
 
	double A, B, C, R1, R2, Delta;
	
	cin >> A;
	cin >> B;
	cin >> C;
		
	Delta = pow(B, 2) - 4 * A * C;
	R1 = (-B + sqrt(Delta)) / (2 * A);
	R2 = (-B - sqrt(Delta)) / (2 * A);
	
	if(Delta < 0 || A == 0){
		cout << "Impossivel calcular" << endl;
	}
	else{
		cout << fixed;
		cout.precision(5);
		cout << "R1 = " << R1 << endl;
		cout << "R2 = " << R2 << endl;
	}
 
    return 0;
}