#include <iostream>
 
using namespace std;

int comparador(const void *a, const void *b);
int comparadorReverso(const void *a, const void *b);

int main(){
  int vezes, N, i, tamP = 0, tamI = 0, aux, Trocou;
  int *vP = NULL, *vI = NULL; 

  cin >> vezes;

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
    cout << vP[i] << endl;
  }

  for(i = 0; i < tamI; i++){
    cout << vI[i] << endl;
  }

  return 0;
}

int comparador(const void *a, const void *b) {
   return (*(int*)a - *(int*)b);
}
int comparadorReverso(const void *a, const void *b){
 return (*(int*)b - *(int*)a);
}