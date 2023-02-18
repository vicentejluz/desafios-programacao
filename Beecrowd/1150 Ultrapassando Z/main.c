#include <stdio.h>

int main(){
  int X, Z, i, cont = 0, soma = 0;
  
    scanf("%d", &X);
    
    do{
      scanf("%d", &Z);
    }while(Z <= X);

    i = X;
    while(soma <= Z){
      soma += i;
      cont++;
      i++;
    }
    
    printf("%d\n", cont);

  return 0;
}