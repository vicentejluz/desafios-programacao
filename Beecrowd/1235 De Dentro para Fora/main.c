#include <stdio.h>
#include <string.h>

int main(){
    int n, met, j, i;
    char str[101], rev_m[101], rev_f[101], rev[101];

    scanf("%d", &n);
    while(n--){
        getchar();
        scanf("%[^\n]", str);

        met = strlen(str) / 2;

        for(i = met - 1, j = 0; i >= 0; i--, j++)
            rev_m[j] = str[i];

        rev_m[j] = '\0';
        
        for(i = strlen(str) - 1, j = 0; i >= met; i--, j++)
            rev_f[j] = str[i];

        rev_f[j] = '\0';

        strcpy(rev, rev_m);
        strcat(rev, rev_f);

        printf("%s\n", rev);

        rev_m[0] = '\0';
        rev_f[0] = '\0';

    }

    return 0;
}