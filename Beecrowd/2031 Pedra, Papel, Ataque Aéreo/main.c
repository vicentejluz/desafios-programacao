#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char jog1[7], jog2[7];

    scanf("%d", &n);

    while(n--){
        scanf("%s", jog1);
        scanf("%s", jog2);
        
        if((strcmp(jog1, "ataque") == 0) && (strcmp(jog2, "pedra") == 0) || (strcmp(jog1, "pedra") == 0) && (strcmp(jog2, "papel") == 0) ||(strcmp(jog1, "ataque") == 0) && (strcmp(jog2, "papel") == 0))
            printf("Jogador 1 venceu\n");
        else if((strcmp(jog2, "ataque") == 0) && (strcmp(jog1, "pedra") == 0) || (strcmp(jog2, "pedra") == 0) && (strcmp(jog1, "papel") == 0) || (strcmp(jog1, "papel") == 0) && (strcmp(jog2, "ataque") == 0))
            printf("Jogador 2 venceu\n");
        else if((strcmp(jog1, "papel") == 0) && (strcmp(jog2, "papel") == 0))
            printf("Ambos venceram\n");
        else if((strcmp(jog1, "pedra") == 0) && (strcmp(jog2, "pedra") == 0))
            printf("Sem ganhador\n");
        else
            printf("Aniquilacao mutua\n");
    }

    return 0;
}