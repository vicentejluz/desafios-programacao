#include <iostream>
 
using namespace std;
 
int main() {
 
	int X, i;
	
	do{
		cin >> X;
	
		for(i = 1; i < X; i++)
			cout << i << " ";
		if(X != 0)
			cout << X << endl;
	}while(X != 0);
 
    return 0;
}