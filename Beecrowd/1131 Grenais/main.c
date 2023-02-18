#include <stdio.h>

int main() {

    int I, G, Grenal, VI = 0, VG = 0, Emp = 0, i = 0;

    do {
        scanf("%d %d", &I, &G);

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &Grenal);

        if (I > G)
            VI++;
        else if (G > I)
            VG++;
        else
            Emp++;

        i++;

    } while (Grenal == 1);

    printf("%d grenais\n", i);
    printf("Inter:%d\n", VI);
    printf("Gremio:%d\n", VG);
    printf("Empates:%d\n", Emp);
    if (VI > VG)
        printf("Inter venceu mais\n");
    else if (VG > VI)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");

    return 0;
}