#include <stdio.h>

int main(){
  int N, i, X, j, soma = 0;

  scanf("%d", &N);

  for(i = 0; i < N; i++){
    scanf("%d", &X);
    for(j = 1; j < X; j++){
      if(X % j == 0)
        soma += j;
    }
    if(soma == X)
      printf("%d eh perfeito\n", X);
    else
      printf("%d nao eh perfeito\n", X);
    soma = 0;
  } 

  return 0;
}