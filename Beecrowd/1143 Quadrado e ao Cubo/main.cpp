#include <iostream>
#include <math.h> 
using namespace std;
 
int main() {
 
	int N, i, Quad, Cub;
	
	cin >> N;
	
	for(i = 1; i <= N; i++){		
			Quad = pow(i, 2);
			Cub = pow(i, 3);
			cout << i << " " << Quad << " " << Cub << endl;
		
	}
 
    return 0;
}