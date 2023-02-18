#include <stdio.h>
 
int main() {
 
  int i, N, quantia, somaC = 0, somaR = 0, somaS = 0, totalCobaia;
  double porC, porR, porS;
  char tipo;

  scanf("%d", &N);

  for(i = 0; i < N; i++){
    do{
      scanf("%d %c", &quantia, &tipo);
    }while(tipo != 'C' && tipo != 'R' && tipo != 'S');
    switch (tipo){
      case 'C':
        somaC += quantia;
      break;
      case 'R':
        somaR += quantia;
      break;
      case 'S':
        somaS += quantia;
    }
  }
  
  totalCobaia = somaC + somaR + somaS;
  porC = (double)(100 * somaC) / totalCobaia;
  porR = (double)(100 * somaR) / totalCobaia;
  porS = (double)(100 * somaS) / totalCobaia;

  printf("Total: %d cobaias\n", totalCobaia);
  printf("Total de coelhos: %d\n", somaC);
  printf("Total de ratos: %d\n", somaR);
  printf("Total de sapos: %d\n", somaS);
  printf("Percentual de coelhos: %.2lf %%\n", porC);
  printf("Percentual de ratos: %.2lf %%\n", porR);
  printf("Percentual de sapos: %.2lf %%\n", porS);
 
    return 0;
}