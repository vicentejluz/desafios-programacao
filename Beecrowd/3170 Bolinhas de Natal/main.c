#include <stdio.h>

int main(){
    int b, g, res;

    scanf("%d", &b);
    scanf("%d", &g);

    res = (g / 2) - b;

    if(res <= 0)
        printf("Amelia tem todas bolinhas!\n");
    else
        printf("Faltam %d bolinha(s)\n", res);

    return 0;
}