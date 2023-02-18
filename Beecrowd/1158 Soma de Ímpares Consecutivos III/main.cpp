#include <iostream>
 
using namespace std;

int main(){
  int N, X, Y, i, j, soma = 0, cont;

  cin >> N;

  for (i = 0; i < N; i++){
    cin >> X >> Y;
    for(j = X, cont = 0; cont < Y; j++)
      if(j % 2 != 0){
        soma += j;
        cont++;
      }
    cout << soma << endl;
    soma = 0;
  }
  return 0;
}