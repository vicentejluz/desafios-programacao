#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b) {
   return (*(int*)a - *(int*)b);
}
int comparadorReverso(const void * a, const void * b){
 return (*(int*)b - *(int*)a);
}

int main(){
  int vezes, N, i, tamP = 0, tamI = 0, aux, Trocou;
  int *vP = NULL, *vI = NULL; 

  scanf("%d", &vezes);

  for(i = 0; i < vezes; i++){
    scanf("%d", &N);
    if(N % 2 == 0){
      tamP++;
      vP = (int *)realloc(vP, sizeof(int) * tamP);
      vP[tamP - 1] = N;
    }else{
      tamI++;
      vI = (int *)realloc(vI, sizeof(int) * tamI);
      vI[tamI - 1] = N;
    }
  }

  qsort(vP, tamP, sizeof(int), comparador);
  qsort(vI, tamI, sizeof(int), comparadorReverso);
  for(i = 0; i < tamP; i++){
    printf("%d\n", vP[i]);
  }

  for(i = 0; i < tamI; i++){
    printf("%d\n", vI[i]);
  }

  return 0;
}