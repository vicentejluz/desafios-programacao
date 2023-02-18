#include <stdio.h>
#include <string.h>

int main(){
    int t, r, g, b, i = 1,m, p;
    char str[5];

    scanf("%d", &t);

    while(t--){
        scanf("%s", str);
        scanf("%d %d %d", &r, &g, &b);

        if(strcmp(str, "max") == 0){
            if(r > g && r > b)
                p = r;
            else if(g > r && g > b)
                p = g;
            else
                p = b;
        }
        else if(strcmp(str, "min") == 0){
            if(r < g && r < b)
                p = r;
            else if(g < r && g < b)
                p = g;
            else
                p = b;
        }
        else if(strcmp(str, "mean") == 0)
            p = (r + g + b) / 3;
        else
            p = (r * 0.3) + (g * 0.59) + (b * 0.11);

        printf("Caso #%d: %d\n", i++, p);
    }

    return 0;
}