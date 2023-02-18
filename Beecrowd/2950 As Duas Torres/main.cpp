#include <iostream>

using namespace std;

int main(){
    int n, x, y;
    double res;

    cin >> n >> x >> y;

    res = (double)n / (x + y);

    cout << fixed;
    cout.precision(2);
    cout << res << endl;

    return 0;
}