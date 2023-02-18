#include <stdio.h>
 
int main() {
 
  int N, i, ant = 0, prox = 1, fibonacci;

  scanf("%d", &N);

  for(i = 0; i < N; i++){
    if (i < 2)
      fibonacci = ant + i;
    else{
      fibonacci = ant + prox;
      ant = prox;
      prox = fibonacci;
    } 
    if(i < N - 1)
      printf("%d ", fibonacci);
    else 
      printf("%d\n", fibonacci);
  }
 
    return 0;
}