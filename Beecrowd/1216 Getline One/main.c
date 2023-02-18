#include <stdio.h>

int main(){
    int cont = 0, dis, res = 0;
    double med;
    char nome[101];

    while(scanf(" %[^\n]", nome) != EOF){
        scanf("%d", &dis);

        res += dis;
        
        cont++;

    }

    med = (double)res / cont;

    printf("%.1lf\n", med);

    return 0;
}