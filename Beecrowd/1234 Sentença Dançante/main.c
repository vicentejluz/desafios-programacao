#include <stdio.h>
 
int main() {
    int i, x;
    char s[51];

    while(gets(s) != NULL){ 
        x = 0;
        for(i = 0; s[i] != '\0'; i++){
            if(x % 2 == 0)
                s[i] = toupper(s[i]);  
            else
                s[i] = tolower(s[i]);
            if(s[i] != ' ') 
                x++;            
        }

        printf("%s\n", s);
    }
 
    return 0;
}