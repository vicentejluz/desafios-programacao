#include <iostream>
#include <string>
using namespace std;

int main(){
  int N, j = 0, i, vI[100], soma;
  string V;

  cin >> N;
  do{
    cin >> V;
    soma = 0;
    //for(i = 0; i < V[i] != '\0'; i++){
    for(i = 0; i < V.length(); i++){
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
    cout << soma << " leds" << endl;
    j++;
  }while(N > j);

  return 0;
}