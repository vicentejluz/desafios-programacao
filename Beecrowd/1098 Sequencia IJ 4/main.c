#include <stdio.h>

int main(){
  float i, j, k = 0.2;

  for(i = 0; i <= 2.2; i = i += 0.2){
    for(j = 1; j <= 3; j++){
      if(i == 0)
        printf("I=0 J=%.f\n", j);
      else if(i == 1){
        printf("I=1 J=%.f\n", j + k);
      }
      else if(i > 2){
        printf("I=2 J=%.f\n", j + k);
      }      
      else
        printf("I=%.1f J=%.1f\n", i, j + k);
      if (j == 3 && i > 0)
        k += 0.2; 
    }
  }
  return 0;
}