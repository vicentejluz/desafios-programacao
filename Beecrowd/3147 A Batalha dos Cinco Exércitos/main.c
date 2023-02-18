#include <stdio.h>

int main(){
    int h, e, a, o, w, x, alianca, inimigo;

    scanf("%d %d %d %d %d %d", &h, &e, &a, &o, &w, &x);

    alianca = h + e + a + x;
    inimigo = o + w;

    if(alianca >= inimigo)
        printf("Middle-earth is safe.\n");
    else
        printf("Sauron has returned.\n");

    return 0;
}