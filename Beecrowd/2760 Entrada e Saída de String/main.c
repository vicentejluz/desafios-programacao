#include <stdio.h>

int main(){
    char a[101], b[101], c[101];

    scanf(" %[^\n]", a);
    scanf(" %[^\n]", b);
    scanf(" %[^\n]", c);

    printf("%s%s%s\n", a, b, c);
    printf("%s%s%s\n", b, c, a);
    printf("%s%s%s\n", c, a, b);
    printf("%.10s%.10s%.10s\n", a, b, c); // limita string a 10 caracteres %.10s
    
    return 0;
}