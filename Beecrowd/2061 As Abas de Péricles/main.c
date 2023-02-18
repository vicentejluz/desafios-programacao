#include <stdio.h>
#include <string.h>

int main(){
    int n, m;
    char str[8];

    scanf("%d %d", &n, &m);

    while(m--){
        scanf("%s", str);

        if(strcmp(str, "fechou") == 0)
            n += 1;
        else
            n -= 1;

    }

    printf("%d\n", n);

    return 0;
}