#include <stdio.h>

int main(){
    int n, t;

    scanf("%d", &n);

    while(n--){
        scanf("%d", &t);

        if(t == 2014)
            printf("%d D.C.\n", t - 2013);
        else if(t < 2014)
            printf("%d D.C.\n", 2015 - t);
        else
            printf("%d A.C.\n", t - 2014);
    }

    return 0;
}