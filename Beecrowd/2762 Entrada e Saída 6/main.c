#include <stdio.h>

int main(){
    char str[20], str2[20], str3[20];
    int j = 0, i, k = 0;

    scanf("%s", str);

    for(i = 0; str[i] != '.'; i++){
        str2[i] = str[i];
        j++;
    }

    for(i = j + 1; str[i] != '\0'; i++)
        str3[k++] = str[i];

    printf("%d.%d\n", atoi(str3), atoi(str2)); // atoi() converte string em int
    
    return 0;
}