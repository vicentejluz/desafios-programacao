#include <iostream>
using namespace std;

int main(){
	int N, X, Y, i;
	double D;
	
	cin >> N;
	
	for(i = 0; i < N; i++){
		cin >> X >> Y;
		if(Y == 0)
			cout << "divisao impossivel" << endl;
		else{
			D = (double) X / Y;
			cout << fixed;
			cout.precision(1);
			cout << D << endl;
		}
	}
	
	return 0;
}