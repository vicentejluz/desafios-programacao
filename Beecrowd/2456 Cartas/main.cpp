#include <iostream>

using namespace std;

int main(){
    int a, b, c, d, e;

    cin >> a >> b >> c >> d >> e;

    if(a < b and b < c and c < d and d < e)
        cout << "C" << endl;
    else if(a  > b and b > c and c > d and d > e)
        cout << "D" << endl;
    else
        cout << "N" << endl;

    return 0;
}