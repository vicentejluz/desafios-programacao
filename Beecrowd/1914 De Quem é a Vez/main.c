#include <stdio.h>
#include <string.h>

int main(){
    int qt, n, m, res;
    char jog1[101], esc1[6], jog2[101], esc2[6], escolha[6];

    scanf("%d", &qt);
    while(qt--){
        scanf("%s %s %s %s", jog1, esc1, jog2, esc2);
        scanf("%d %d", &n, &m);

        res = n + m;

        if(res % 2 == 0)
            strcpy(escolha, "PAR");
        else
            strcpy(escolha, "IMPAR");

        if(strcmp(escolha, esc1) == 0)
            printf("%s\n", jog1);
        else
            printf("%s\n", jog2);
        
        escolha[0] ='\0';
    }

    return 0;
}