#include <stdio.h>

int main(){
    int s, t, f, res;

    scanf("%d %d %d", &s, &t, &f);

    res = s + t + f;

    if(res > 23)
        res -= 24;
    else if(res < 0)
        res += 24;


    printf("%d\n", res);

    return 0;
}