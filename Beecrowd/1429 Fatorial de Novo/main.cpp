#include <iostream>

using namespace std;

int fatorial(int n);

int main(){
    string num;
    int tam, fat, j, res;

    while(true){
        cin >> num;

        if(num == "0")
            break;

        j = 0;
        res = 0;    
        tam = num.size();
        int vet[tam];

        for(int i = tam; i >= 1; i--){
            vet[j] = fatorial(i);
            j++;
        }

        for(int i = 0; i < tam; i++)
            res += (num[i] - 48) * vet[i];

        cout << res << endl;
    }

    return 0;
}

int fatorial(int n){
    if(n == 0)
        return 1;
    return fatorial(n - 1) * n;
}