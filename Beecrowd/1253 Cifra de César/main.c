#include <stdio.h>

int main(){

    int n, c, i, j;
    char s[50];

    scanf("%d", &n);

    for(i = 0; i < n; i++){
        scanf("%s", s);
        scanf("%d", &c);

        for(j = 0; s[j] != '\0'; j++){
            if(s[j] - c < 'A')
                s[j] = s[j] - c + 26;
            else
                s[j] = s[j] - c;
                
        }
        printf("%s\n", s);
        s[0] = "\0";
    }

    return 0;
}