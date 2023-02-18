#include <iostream>
 
using namespace std;
 
int main() {
 
	double N1, N2, N3, N4, media, NotaExame, MediaExame;
	
	cin >> N1;
	cin >> N2;
	cin >> N3;
	cin >> N4;
	
	media = (2 * N1 + 3 * N2 + 4 * N3 + 1 * N4) / (2 + 3 + 4 + 1);
	
	cout << fixed;
	cout.precision(1);
	if(media < 5.0){
		cout << "Media: " << media << endl;
		cout << "Aluno reprovado." << endl;
	}
	else if(media <= 6.9){
		cin >> NotaExame;
		cout << "Media: " << media << endl;
		cout<< "Aluno em exame." << endl;
		MediaExame = (media + NotaExame) / 2;
		cout << "Nota do exame: " << NotaExame << endl;
			if(MediaExame < 5.0){
				cout << "Aluno reprovado." << endl;
				cout << "Media final: " << MediaExame << endl;
			}
			else{
				cout << "Aluno aprovado." << endl;
				cout << "Media final: " << MediaExame << endl;
			}
	}
	else{
		cout << "Media: " << media << endl;
		cout << "Aluno aprovado." << endl;
	}
 
    return 0;
}