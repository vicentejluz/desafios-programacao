#include <stdio.h>
#include <string.h>

int main(){
    int n, met, i, j = 0;
    char m[1000];
    char rev[1000];

    scanf("%d", &n);

    while(n--){
        scanf(" %[^\n]", m);
        for(i = 0; i < strlen(m); i++){
            if(m[i] >= 97 && m[i] <= 122 || m[i] >= 65 && m[i] <= 90)
                m[i] = m[i] + 3;
        } 

        for(i = strlen(m) - 1; i >= 0; i--){
            rev[j] = m[i];
            j++;
        }

        rev[j] = '\0';

        strcpy(m, rev);

        met = strlen(m) / 2;
        for(i = met; i < strlen(m); i++)
            m[i] = m[i] - 1;   

        printf("%s\n", m);

        m[0] = '\0';
        rev[0] = '\0';
        j = 0;
    }

    return 0;
}