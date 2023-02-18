#include <stdio.h>

int main(){
  int X, i, soma = 0, cont;

  do{
    scanf("%d", &X);
    if(X != 0){
      for(i = X, cont = 0; cont < 5; i++){
        if(i % 2 == 0){
          soma += i;
          cont++;
        }
      }
    printf("%d\n", soma);
    soma = 0;
    }
  }while(X != 0);
  return 0;
}