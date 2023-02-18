#include <iostream>

using namespace std;

int main(){
    int n, cont = 1;

    cin >> n;

    int vet[n];

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    for(int i = 1; i < n; i++){
        if(vet[i] != vet[i - 1])
            cont++;
    }

    cout << cont << endl;

    return 0;
}