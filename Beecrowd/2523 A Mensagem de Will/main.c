#include <stdio.h>

int main(){
    int n, i;
    char std[26];

    while(scanf("%s", std) != EOF){
        scanf("%d", &n);

        int pos[n];

        for(i = 0; i < n; i++)
            scanf("%d", &pos[i]);

        for(i = 0; i < n; i++)
            printf("%c", std[pos[i] - 1]);
        
        printf("\n");
    }

    return 0;
}