#include <iostream>

using namespace std;

int main(){
    const int TAM = 5;
    int v1[TAM], v2[TAM], i, cont = 0;

    for(i = 0; i < TAM; i++)
        cin >> v1[i];
    
    for(i = 0; i < TAM; i++)
        cin >> v2[i];

    for(i = 0; i < TAM; i++){
        if(v1[i] != v2[i])
            cont++;
    }

    if(cont == TAM)
        cout << "Y" << endl;
    else
        cout << "N" << endl;

    return 0;
}