#include <iostream>

using namespace std;

void ordenar_desc(int v[], int tam);

int main(){
    int n, q;

    while(cin >> n >> q){

        int notas[n], pos[q];  

        for(int i = 0; i < n; i++)
            cin >> notas[i];

        for(int i = 0; i < q; i++)
            cin >> pos[i];

        ordenar_desc(notas, n);

        for(int i = 0; i < q; i++)
            cout << notas[pos[i] - 1] << endl;
    }

    return 0;
}

// Bubble sort
void ordenar_desc(int v[], int tam){
    int i, temp;
    bool trocou;
    
    do{
        trocou = false;
        for(i = 0; i < tam - 1; i++){
            if(v[i] < v[i + 1]){
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                trocou = true;
            }
        }
    }while(trocou);
}