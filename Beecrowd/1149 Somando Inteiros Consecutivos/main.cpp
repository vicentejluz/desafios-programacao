#include <iostream>
 
using namespace std;

int main(){
  int A, N, i, cont, soma = 0;
  
    cin >> A;
    
    do{
      cin >> N;
    }while(N <= 0);

    for(i = A, cont = 0; cont < N; i++){
        soma += i;
        cont++;
    }
    cout << soma << endl;

  return 0;
}