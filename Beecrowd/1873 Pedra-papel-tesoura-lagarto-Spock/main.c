#include <stdio.h>
#include <string.h>

int main(){
    int c;
    char jog1[10], jog2[10];

    scanf("%d", &c);

    while(c--){
        scanf("%s %s", jog1, jog2);

        if((strcmp(jog1, "tesoura") == 0 && strcmp(jog2, "papel") == 0) ||
            (strcmp(jog1, "tesoura") == 0 && strcmp(jog2, "lagarto") == 0) || 
            (strcmp(jog1, "papel") == 0 && strcmp(jog2, "pedra") == 0) || 
            (strcmp(jog1, "papel") == 0 && strcmp(jog2, "spock") == 0) ||
            (strcmp(jog1, "pedra") == 0 && strcmp(jog2, "lagarto") == 0) ||
            (strcmp(jog1, "pedra") == 0 && strcmp(jog2, "tesoura") == 0) ||
            (strcmp(jog1, "lagarto") == 0 && strcmp(jog2, "spock") == 0) ||
            (strcmp(jog1, "lagarto") == 0 && strcmp(jog2, "papel") == 0) ||
            (strcmp(jog1, "spock") == 0 && strcmp(jog2, "tesoura") == 0) ||
            (strcmp(jog1, "spock") == 0 && strcmp(jog2, "pedra") == 0))
                printf("rajesh\n");
        else if((strcmp(jog2, "tesoura") == 0 && strcmp(jog1, "papel") == 0) ||
            (strcmp(jog2, "tesoura") == 0 && strcmp(jog1, "lagarto") == 0) || 
            (strcmp(jog2, "papel") == 0 && strcmp(jog1, "pedra") == 0) || 
            (strcmp(jog2, "papel") == 0 && strcmp(jog1, "spock") == 0) ||
            (strcmp(jog2, "pedra") == 0 && strcmp(jog1, "lagarto") == 0) ||
            (strcmp(jog2, "pedra") == 0 && strcmp(jog1, "tesoura") == 0) ||
            (strcmp(jog2, "lagarto") == 0 && strcmp(jog1, "spock") == 0) ||
            (strcmp(jog2, "lagarto") == 0 && strcmp(jog1, "papel") == 0) ||
            (strcmp(jog2, "spock") == 0 && strcmp(jog1, "tesoura") == 0) ||
            (strcmp(jog2, "spock") == 0 && strcmp(jog1, "pedra") == 0))
                printf("sheldon\n");
        else
            printf("empate\n");
    }

    return 0;
}