#include <stdio.h>

int main(){
    int n, s, b, a, s1, b1, a1, res1[6] = {0, 0, 0, 0, 0, 0};
    double res[3];
    char str[51];

    scanf("%d", &n);

    while(n--){

        scanf("%s", str);
        scanf("%d %d %d", &s, &b, &a);
        scanf("%d %d %d", &s1, &b1, &a1);

        res1[0] += s;
        res1[1] += b;
        res1[2] += a;
        res1[3] += s1;
        res1[4] += b1;
        res1[5] += a1;

    }

    res[0] = (double)res1[3] / res1[0] * 100;
    res[1] = (double)res1[4] / res1[1] * 100;
    res[2] = (double)res1[5] / res1[2] * 100;

    printf("Pontos de Saque: %.2lf %%.\n", res[0]);
    printf("Pontos de Bloqueio: %.2lf %%.\n", res[1]);
    printf("Pontos de Ataque: %.2lf %%.\n", res[2]);

    return 0;
}