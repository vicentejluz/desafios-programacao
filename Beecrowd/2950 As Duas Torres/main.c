#include <stdio.h>

int main(){
    int n, x, y;
    double res;

    scanf("%d %d %d", &n, &x, &y);

    res = (double)n / (x + y);

    printf("%.2lf\n", res);

    return 0;
}