#include <stdio.h>

int main(){
    int M, N, aux, i, soma;
    
    while(scanf("%d %d", &M, &N) !=EOF){
        soma = 0;
        if(M <= 0 || N <= 0){
            break;
        }
        if(M > N){
            aux = M;
            M = N;
            N = aux;
        }
    
        for(i = M; i <= N; i++){
            soma += i;
            printf("%d ", i);
        }
            printf("Sum=%d\n", soma);
    }

    return 0;
}