#include <stdio.h>

int main(){
    int n = 0, res;

    while(n < 3){
        scanf("%d", &n);
        
        if(n >= 3){
            res = n - 2;

            printf("%d\n", res);
        }
    }

    return 0;
}