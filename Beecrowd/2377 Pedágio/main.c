#include <stdio.h>

int main(){
    int l, d, k, p, res;

    scanf("%d %d", &l, &d);
    scanf("%d %d", &k, &p);

    res = ((l / d) * p) + (l * k);

    printf("%d\n", res);

    return 0;
}