#include <stdio.h>

int main(){
  int X, Y, i, aux;

  scanf("%d" "%d", &X, &Y);
  aux = X;
  for(i = 1; i <= Y; i++){
    if(i < X)
      printf("%d ", i);
    else{
      printf("%d\n", i);
      X += aux;
    }
  }
  return 0;
}