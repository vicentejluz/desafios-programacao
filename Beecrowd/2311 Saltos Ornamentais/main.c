#include <stdio.h>

#define MAX 7

double obterMaior(double s[]);
double obterMenor(double s[]);

int main(){
    int n, i;
    char str[101];
    double gd, saltos[MAX], menor, maior, res;

    scanf("%d", &n);

    while(n--){
        scanf("%s", str);
        scanf("%lf", &gd);
        for(i = 0; i < MAX; i++){
            scanf("%lf", &saltos[i]);
            res += saltos[i];
        }

        maior = obterMaior(saltos);
        menor = obterMenor(saltos);

        res = (res - (maior + menor)) * gd;  

        printf("%s %.2lf\n", str, res);

        res = 0;
    }

    return 0;
}

double obterMaior(double s[]){
    int i;
    double maior;

    maior = s[0];

    for(i = 0; i < MAX; i++){
        if(maior < s[i])
            maior = s[i];
    }

    return maior;
}

double obterMenor(double s[]){
    int i;
    double menor;

    menor = s[0];

    for(i = 0; i < MAX; i++){
        if(menor > s[i])
            menor = s[i];
    }

    return menor;
}