#include <iostream>
 
using namespace std;
 
int main() {
 
  int N, i, ant = 0, prox = 1, fibonacci;

  cin >> N;

  for(i = 0; i < N; i++){
    if (i < 2)
      fibonacci = ant + i;
    else{
      fibonacci = ant + prox;
      ant = prox;
      prox = fibonacci;
    } 
    if(i < N - 1)
      cout << fibonacci << " ";
    else 
      cout << fibonacci << endl;
  }
 
    return 0;
}