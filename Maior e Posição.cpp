#include <iostream>
#include <iomanip>

 
using namespace std;
 
int main() {
	int valor, maior = 0, posicao;
	 
	for (int i = 0; i < 100; i++) {
		cin >> valor;
		
		if (valor > maior) {
			maior = valor;
			posicao = i;
			posicao++;
		}
	}
	cout << maior << "\n";
	cout << posicao << "\n";
	
    return 0;
}
