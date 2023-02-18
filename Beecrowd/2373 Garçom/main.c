#include <stdio.h>

int main(){
    int n, l, c, res = 0;

    scanf("%d", &n);

    while(n--){
        scanf("%d %d", &l, &c);

        if(l > c)
            res += c; 
    }

    printf("%d\n", res);

    return 0;
}