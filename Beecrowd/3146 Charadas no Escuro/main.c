#include <stdio.h>
#define PI 3.14
 
int main() {
 
    double r, c;

    scanf("%lf", &r);

    c = 2 * PI * r;

    printf("%.2lf\n", c);
 
    return 0;
}