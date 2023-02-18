#include <stdio.h>

int main(){
    int P1, C1, P2, C2 , esq, dir;

    scanf("%d %d %d %d", &P1, &C1, &P2, &C2);

    esq = P1 * C1;
    dir = P2 * C2;

    if(esq == dir)
        printf("0\n");
    else if(esq > dir)
        printf("-1\n");
    else
        printf("1\n");

    return 0;
}