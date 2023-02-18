#include <iostream>
 
using namespace std;

int main(){
  int X, i, soma, cont;

  do{
    cin >> X;
    if(X != 0){
      soma = 0;
      for(i = X, cont = 0; cont < 5; i++){
        if(i % 2 == 0){
          soma += i;
          cont++;
        }
      }
    cout << soma << endl;
    }
  }while(X != 0);
  return 0;
}