#include <iostream>

using namespace std;

int main(){
    int n = 0, res;

    while(n < 3){
        cin >> n;
        
        if(n >= 3){
            res = n - 2;

            cout << res << endl;
        }
    }

    return 0;
}