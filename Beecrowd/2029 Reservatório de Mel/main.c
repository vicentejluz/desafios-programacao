#include <stdio.h>
#include <math.h>

#define PI 3.14

int main(){
    double v, d, alt, area, raio;

    while(scanf("%lf %lf", &v, &d) != EOF){
        raio = d / 2;

        area = PI * pow(raio, 2);
        alt = v / area;

        printf("ALTURA = %.2lf\n", alt);
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}