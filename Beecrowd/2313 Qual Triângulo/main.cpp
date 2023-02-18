#include <iostream>

using namespace std;
 
int main() { 
	int A, B, C, temp;
	
	cin >> A >> B >> C;
	
	if(A < B){
        temp = A;
        A = B;
        B = temp;
    }

    if(B < C){
        temp = B;
        B = C;
        C = temp;
    }

    if(A < B){
        temp = A;
        A = B;
        B = temp;
    }
    if(A + B > C and A + C > B and B + C > A){
        if(A == B and B == C)
            cout << "Valido-Equilatero" << endl;
        else if(A == B or B == C)
            cout << "Valido-Isoceles" << endl;
        else if(A != B and B != C and C != A)
            cout << "Valido-Escaleno" << endl;
        
        if(A * A == B * B + C * C)
		    cout << "Retangulo: S" << endl;
        else
            cout << "Retangulo: N" << endl;
    }
    else
        cout << "Invalido" << endl;

    return 0;
}