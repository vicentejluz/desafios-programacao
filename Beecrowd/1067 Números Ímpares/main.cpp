#include <iostream>
 
using namespace std;
 
int main() {
 
	int i, X;
	
	cin >> X;
	
	for(i = 1; i <= X; i++){
		if(i % 2 == 1){
			cout << i << endl;
		}
	}
 
    return 0;
}