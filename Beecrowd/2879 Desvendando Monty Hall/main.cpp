#include <iostream>

using namespace std;

int main(){
    int n, p, cont = 0;

    cin >> n;

    while(n--){
        cin >> p;        

        if(p != 1)
            cont++;
    }

    cout << cont << endl;

    return 0;
}