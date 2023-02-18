#include <stdio.h>
#include <string.h>

int main(){
    int n, cont;
    char str[1001];

    scanf("%d", &n);

    while(n--){
        scanf("%s", str);

        if((strchr(str, 'Q') && strchr(str, 'J') && strchr(str, 'K') && strchr(str, 'A')) != NULL) // strchr() ve se tem o carater passado no parametro na string
            printf("Aaah muleke\n");
        else
            printf("Ooo raca viu\n");
    }

    return 0;
}