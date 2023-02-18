#include <iostream>
 
using namespace std;
 
int main() {
 
	int N[10], V, i;
	
	do{
		cin >> V;
	
		N[0] = V;
		
	if(V < 50){
		for(i = 1; i < 10; i++){
			N[i] = N[i - 1] * 2;
		}
		for(i = 0; i < 10; i++){
			cout << "N[" << i <<"] = " << N[i] << endl;
		}
	}
	}while(V >= 50);
 
    return 0;
}