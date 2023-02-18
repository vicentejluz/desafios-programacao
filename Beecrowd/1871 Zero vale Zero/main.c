#include <stdio.h>
#include <string.h>

int main(){
    int m, n, res, i, j, len;
    char str[12];

    while(1){
        scanf("%d %d", &m, &n);

        if(m == 0 && n == 0)
            break;

        res = m + n;

        sprintf(str, "%d", res); // converte int para string
        // itoa(int, string, 10) converte int para string


        // remove caracter da string
        len = strlen(str);
        for(i = 0; i < len; i++){
            if(str[i] == '0'){
                for(j = i; j < len; j++)
                    str[j] = str[j + 1];
                len--;
                i--;
            }
        }

        printf("%s\n", str);

    }

    return 0;
}