#include <stdio.h>

int main(){
    int n, t, v, res = 0, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%d %d", &t, &v);
        res += t * v;
    }

    printf("%d\n", res);

    return 0;
}