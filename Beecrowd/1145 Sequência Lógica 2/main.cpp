#include <iostream>
 
using namespace std;

int main(){
  int X, Y, i, aux;

  cin >> X >> Y;

  aux = X;

  for(i = 1; i <= Y; i++){
    if(i < X)
      cout << i << " ";
    else{
      cout << i << endl;
      X += aux;
    }
  }
  return 0;
}