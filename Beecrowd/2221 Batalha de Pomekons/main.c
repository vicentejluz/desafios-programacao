#include <stdio.h>

int main(){
    int t, b, atq1, def1, lvl1, res1, atq2, def2, lvl2, res2;

    scanf("%d", &t);

    while(t--){
        scanf("%d", &b);
        scanf("%d %d %d", &atq1, &def1, &lvl1);
        scanf("%d %d %d", &atq2, &def2, &lvl2);

        if(lvl1 % 2 == 0)
            res1 = ((atq1 + def1) / 2) + b;
        else
            res1 = (atq1 + def1) / 2;

        if(lvl2 % 2 == 0)
            res2 = ((atq2 + def2) / 2) + b;
        else
            res2 = (atq2 + def2) / 2;

        if(res1 == res2)
            printf("Empate\n");
        else if(res1 > res2)
            printf("Dabriel\n");
        else
            printf("Guarte\n");
    }

    return 0;
}