#include <iostream>

using namespace std;

int main(){
    int t, n, idade[12], met, cont = 1;

    cin >> t;

    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> idade[i];

        met = n / 2;

        cout << "Case " << cont++ << ": " << idade[met] << endl;
    }

    return 0;
}