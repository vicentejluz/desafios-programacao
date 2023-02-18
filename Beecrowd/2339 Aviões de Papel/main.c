#include <stdio.h>

int main(){
    int c, p, f, res;

    scanf("%d %d %d", &c, &p, &f);

    res = c * f;

    if(res <= p)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}