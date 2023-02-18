#include <stdio.h>

int main(){
    int n, p, cont = 0;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &p);        

        if(p != 1)
            cont++;
    }

    printf("%d\n", cont);

    return 0;
}