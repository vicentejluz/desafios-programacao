#include <iostream>

using namespace std;

int obterPosMenor(int v[], int n);

int main(){
    int n, i;

    cin >> n;

    int v[n];

    for(i = 0; i < n; i++)
        cin >> v[i];

    cout << obterPosMenor(v, n) << endl;

    return 0;
}

int obterPosMenor(int v[], int n){
    int pos = 0, menor, i;
    menor = v[0];

    for(i = 0; i < n; i++){
        if (v[i] < menor){
            menor = v[i];
            pos = i;
        }
    }

    return pos + 1;
}