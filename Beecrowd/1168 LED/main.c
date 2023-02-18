#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int N, k = 0, i, vI[100], soma;
  char V[100];

  scanf("%d", &N);
  do{
    scanf("%s", V);
    soma = 0;
    for(i = 0; i < strlen(V); i++){
      vI[i] = V[i] - '0';
      
      if(vI[i] == 1)
        soma += 2;
      else if(vI[i] == 7)
        soma += 3;
      else if(vI[i] == 4)
        soma += 4;
      else if(vI[i] == 2 || vI[i] == 3 || vI[i] == 5)
        soma += 5;
      else if(vI[i] == 6 || vI[i] == 9 || vI[i] == 0)
        soma += 6;
      else
        soma += 7;
    }
    printf("%d leds\n", soma);
    k++;
  }while(N > k);

  return 0;
}