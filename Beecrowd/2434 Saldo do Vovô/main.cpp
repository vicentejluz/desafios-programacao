#include <iostream>

using namespace std;

int main(){
    int n, s, menor, sum;

    cin >> n >> s;

    menor = s;
    sum = s;

    for(int i = 0; i < n; i++){
        cin >> s;
        sum += s;
        if(sum < menor)
            menor = sum;
    }

    cout << menor << endl;

    return 0;
}