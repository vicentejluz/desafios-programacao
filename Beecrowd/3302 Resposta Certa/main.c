#include <stdio.h>

int main(){

    int n, r;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%d", &r);
        printf("resposta %d: %d\n", i, r);
    }

    return 0;
}