#include <iostream>

using namespace std;

int main(){
    int n, m;
    string str;

    cin >> n >> m;

    while(m--){
        cin >> str;

        if(str == "fechou")
            n += 1;
        else
            n -= 1;
    }

    cout << n << endl;

    return 0;
}