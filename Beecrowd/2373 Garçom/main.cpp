#include <iostream>

using namespace std;

int main(){
    int n, l, c, res = 0;

    cin >> n;

    while(n--){
        cin >> l >> c;

        if(l > c)
            res += c; 
    }

    cout << res << endl;

    return 0;
}