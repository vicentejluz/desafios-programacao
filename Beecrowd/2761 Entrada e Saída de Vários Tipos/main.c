#include <stdio.h>

int main(){
    int a;
    float b;
    char c;
    char d[101];

    scanf("%d %f %c %[^\n]", &a, &b, &c, d);

    printf("%d%f%c%s\n", a, b, c, d);
    printf("%d\t%f\t%c\t%s\n", a, b, c, d); // \t - tabulação um "tab"
    printf("%10d%10f%10c%10s\n", a, b, c, d); // espaço de 10 carcateres

    return 0;
}