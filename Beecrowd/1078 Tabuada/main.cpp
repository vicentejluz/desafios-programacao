#include <iostream>
 
using namespace std;
 
int main() {
 
	int cont, N;
	
	do{
		cin >> N;
	}while(N < 2 || N > 1000);
		for(cont = 1; cont <= 10; cont++){
			cout << cont << " x " << N << " = " << cont * N << endl;
		}
 
    return 0;
}