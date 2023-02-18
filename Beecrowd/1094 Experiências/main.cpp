#include <iostream>
 
using namespace std;
 
int main() {
 
  int i, N, quantia, somaC = 0, somaR = 0, somaS = 0, totalCobaia;
  double porC, porR, porS;
  char tipo;

  cin >> N;

  for(i = 0; i < N; i++){
    do{
      cin >> quantia >> tipo;
    }while(tipo != 'C' && tipo != 'R' && tipo != 'S');
    switch (tipo){
      case 'C':
        somaC += quantia;
      break;
      case 'R':
        somaR += quantia;
      break;
      case 'S':
        somaS += quantia;
    }
  }
  
  totalCobaia = somaC + somaR + somaS;
  porC = (double)(100 * somaC) / totalCobaia;
  porR = (double)(100 * somaR) / totalCobaia;
  porS = (double)(100 * somaS) / totalCobaia;

  cout << fixed;
	cout.precision(2);
  cout << "Total: " << totalCobaia << " cobaias" << endl;
  cout << "Total de coelhos: " << somaC << endl;
  cout << "Total de ratos: " << somaR << endl;
  cout << "Total de sapos: " << somaS << endl;
  cout << "Percentual de coelhos: " << porC << " %" << endl;
  cout << "Percentual de ratos: " << porR << " %" << endl;
  cout << "Percentual de sapos: " << porS << " %" << endl;
 
    return 0;
}