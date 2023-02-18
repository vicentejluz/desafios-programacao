#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
 
	int i, N, X;
	
	do{

	cin >> N;
	}while(N < 5 || N > 2000);
	
	for(i = 1; i <= N; i++){
		if(i % 2 == 0){
			X = pow(i, 2);
			cout << i << "^2 = " << X << endl;	
		}
	}
 
    return 0;
}