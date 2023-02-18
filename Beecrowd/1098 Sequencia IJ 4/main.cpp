#include <iostream>
 
using namespace std;

int main(){
  float i, k = 0.2;
  int j;

  for(i = 0; i < 2.2; i = i += 0.2){
    for(j = 1; j <= 3; j++){
      if(i == 0)
        cout << "I=" << i << " J=" << j << endl;
      else if(i == 1){
        cout << "I=" << i << " J=" << j + k << endl;
      }
      else if(i > 2){
        cout << "I=" << i << " J=" << j + k << endl;
      }      
      else
        cout << "I=" << i << " J=" << j + k << endl;
      if (j == 3 && i > 0)
        k += 0.2; 
    }
  }
  return 0;
}