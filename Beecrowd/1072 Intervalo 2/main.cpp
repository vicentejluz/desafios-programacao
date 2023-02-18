#include <iostream>
 
using namespace std;
 
int main() {
 
	int N, X, i, in = 0, out = 0;
	
	do{
		cin >> N;
	}while(N > 10000);

	for(i = 0; i < N; i++){
		cin >> X;
		
		if(X >= 10 && X <= 20){
			in++;
		}else{
			out++;
		}		
	}
	
	cout << in << " in" << endl;
	cout << out << " out" << endl;
 
    return 0;
}