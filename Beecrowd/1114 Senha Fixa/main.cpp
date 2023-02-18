#include <iostream>
 
using namespace std;
 
int main() {
 
	int senha;
	
	do{
		cin >> senha;
	
	if(senha == 2002)
		cout <<	"Acesso Permitido" << endl;
	else
		cout << "Senha Invalida" << endl;
	}while(senha != 2002);
 
    return 0;
}