#include <iostream>
 
using namespace std;
 
int main() {
 
	int N, i;
	double n1, n2, n3, media;
	
	cin >> N;
	
	for(i = 0; i < N; i++){
		cin >> n1 >> n2 >> n3;
		media = (n1 * 2 + n2 * 3 + n3 * 5) / (2 + 3 + 5);
		cout << fixed;
		cout.precision(1);
		cout << media << endl;
	}
 
    return 0;
}