#include <stdio.h>

void ordenar_desc(int v[], int tam);

int main(){
    int n, q, i;

    while(scanf("%d %d", &n, &q) != EOF){

        int notas[n], pos[q];  

        for(i = 0; i < n; i++)
            scanf("%d", &notas[i]);

        for(i = 0; i < q; i++)
            scanf("%d", &pos[i]);

        ordenar_desc(notas, n);

        for(i = 0; i < q; i++)
            printf("%d\n", notas[pos[i] - 1]);
    }

    return 0;
}

// Bubble sort
void ordenar_desc(int v[], int tam){
    int i, temp, trocou;
    
    do{
        trocou = 0;
        for(i = 0; i < tam - 1; i++){
            if(v[i] < v[i + 1]){
                temp = v[i];
                v[i] = v[i + 1];
                v[i + 1] = temp;
                trocou = 1;
            }
        }
    }while(trocou);
}