#include <stdio.h>

int main(){
    int i = 0;
    char palavrao[20];

    scanf("%s", palavrao);

    for(i = 0; palavrao[i] != '\0'; i++);

    if(i >= 10)
        printf("palavrao\n");
    else
        printf("palavrinha\n");

    return 0;
}