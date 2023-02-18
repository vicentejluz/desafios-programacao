#include <stdio.h>

int ctr(char *str, char c);

int main(){
    int n, cont;
    char str[1001];

    scanf("%d", &n);

    while(n--){
        scanf("%s", str);

        if(ctr(str, 'Q') && ctr(str, 'J') && ctr(str, 'K') && ctr(str, 'A'))
            printf("Aaah muleke\n");
        else
            printf("Ooo raca viu\n");
    }

    return 0;
}

int ctr(char *str, char c){
    int i;

    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == c)
            return 1;
    }
    return 0;
}