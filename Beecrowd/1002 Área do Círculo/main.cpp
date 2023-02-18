#include <iostream>
#include <math.h> 
using namespace std;
 
int main() {
 
	double raio, n = 3.14159, area;
	
	cin >> raio;
	
	area = n * pow(raio, 2);
	cout << fixed;
	cout.precision(4);
	cout << "A=" << area << endl;
 
    return 0;
}