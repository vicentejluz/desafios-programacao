#include <stdio.h>

int main(){
    int t, n, idade[12], i, met, cont = 1;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        for(i = 0; i < n; i++)
            scanf("%d", &idade[i]);

        met = n / 2;

        printf("Case %d: %d\n", cont++, idade[met]);
    }

    return 0;
}