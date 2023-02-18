#include <iostream>
 
using namespace std;
 
int main() {
 
	double A, B, media;
	
	do{
		cin >> A;
		if(A < 0.0 || A > 10.0)
			cout << "nota invalida" << endl;
	}while(A < 0 || A > 10);
	
	do{
		cin >> B;
		if(B < 0.0 || B > 10.0)
			cout << "nota invalida" << endl;
	}while(B < 0 || B > 10);

	media = (A + B) / 2;
	
	cout <<"media = " << media << endl;
 
    return 0;
}