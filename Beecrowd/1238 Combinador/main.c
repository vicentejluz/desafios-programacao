#include <stdio.h>
#include <string.h>

int main(){
    int n, tam, i, tamS, tamT, j;
    char s[100], t[100];

    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s %s", s, t);
        tamS = strlen(s);
        tamT = strlen(t);

        //tam = strlen(s) >= strlen(t) ? tamS : tamT;

        if(strlen(s) >= strlen(t))
            tam = tamS;
        else
            tam = tamT;

        for(j = 0; j < tam; j++){
            if(j < tamS)
                printf("%c", s[j]);
            if(j < tamT)
                printf("%c", t[j]);
        }
        printf("\n");
    }

    return 0;
}