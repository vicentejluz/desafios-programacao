#include <iostream>

using namespace std;

int main(){
    int n, t, v, res = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> t >> v;
        res += t * v;
    }

    cout << res << endl;

    return 0;
}