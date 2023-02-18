#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenar(int min, int max, char *data);

int main(){
    char data[20], data2[20], i;

    scanf("%s", data);

    strcpy(data2, concatenar(3, 6, data));
    strcat(data2, concatenar(0, 3, data));
    strcat(data2, concatenar(6, 9, data));

    printf("%s\n", data2);

    strcpy(data2, concatenar(6, 9, data));
    strcat(data2, concatenar(2, 6, data));
    strcat(data2, concatenar(0, 2, data));

    printf("%s\n", data2);

    for(i = 0; data[i] != '\0'; i++){
        if(data[i] == '/')
            data[i] = '-';
    }
    
    printf("%s\n", data);

    return 0;
}

char *concatenar(int min, int max, char *data){
    int i, j = 0;
    char *aux;
    aux = (char*)malloc(sizeof(char) * (max - min));
    for(i = min; i < max; i++){
        aux[j] = data[i];
        j++; 
    }

    aux[j] = '\0';
    
    return aux;
}