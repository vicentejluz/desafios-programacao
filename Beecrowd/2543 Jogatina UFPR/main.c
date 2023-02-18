#include <stdio.h>

int main() {
    int n, u, i, j, cont;

    while (scanf("%d %d", &n, &u) != EOF) {
        cont = 0;
        for(int k = 0; k < n; k++){
            scanf("%d %d", &i, &j);
            if(i == u && j == 0){
                cont++;
            }
        }

        printf("%d\n", cont);
    }


    return 0;
}
