#include <iostream>

using namespace std;

int main(){
    int n, t;

    cin >> n;

    while(n--){
        cin >> t;

        if(t == 2014)
            cout << t - 2013 << " D.C." << endl;
        else if(t < 2014)
            cout << 2015 - t << " D.C." << endl;
        else
            cout << t - 2014 << " A.C." << endl;
    }

    return 0;
}