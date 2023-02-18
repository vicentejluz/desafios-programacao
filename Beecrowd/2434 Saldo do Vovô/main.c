#include <stdio.h>

int main(){
    int n, s, menor, sum;

    scanf("%d %d", &n, &s);

    menor = s;
    sum = s;

    for(int i = 0; i < n; i++){
        scanf("%d", &s);
        sum += s;
        if(sum < menor)
            menor = sum;
    }

    printf("%d\n", menor);


    return 0;
}