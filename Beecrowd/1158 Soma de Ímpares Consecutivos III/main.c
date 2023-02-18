#include <stdio.h>

int main(){
  int N, X, Y, i, j, soma = 0, cont;

  scanf("%d", &N);

  for (i = 0; i < N; i++){
    scanf("%d" "%d", &X, &Y);
    for(j = X, cont = 0; cont < Y; j++)
      if(j % 2 != 0){
        soma += j;
        cont++;
      }
    printf("%d\n", soma);
    soma = 0;
  }
  return 0;
}