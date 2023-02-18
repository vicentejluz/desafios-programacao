#include <iostream>
 
using namespace std;

int main(){
  int X, Z, i, cont = 0, soma = 0;
  
    cin >> X;
    
    do{
      cin >> Z;
    }while(Z <= X);

    i = X;
    while(soma <= Z){
      soma += i;
      cont++;
      i++;
    }
    
    cout << cont << endl;

  return 0;
}