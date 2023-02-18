#include <iostream>
 
using namespace std;

int main(){
  int N, i, X, j, soma = 0;

  cin >> N;

  for(i = 0; i < N; i++){
    cin >> X;
    for(j = 1; j < X; j++){
      if(X % j == 0)
        soma += j;
    }
    if(soma == X)
      cout << X << " eh perfeito" << endl;
    else
      cout << X << " nao eh perfeito" << endl;
    soma = 0;
  } 

  return 0;
}