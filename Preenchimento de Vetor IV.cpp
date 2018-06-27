#include <iostream>


using namespace std;

int main ()
{
	int quantidade = 15, impar[5], par[5], numero, i = 0, p = 0;
	
	while(quantidade--) {
		cin >> numero;
		
		if(numero %2 == 0) {
			par[p] = numero;
			p++;
		} else {
			impar[i] = numero;
			i++;
		}

		if(p == 5) {

			for(int k = 0; k< 5 ;k++){
				cout << "par[" << k <<"] = " << par[k] << endl;
			} 
			p = 0;
		}

		if(i == 5) {

			for(int k = 0; k < 5 ;k++) {
				cout << "impar[" << k <<"] = " << impar[k] << endl;
			} 
			i = 0;
		}
	}

	for(int k = 0; k < i ;k++) {
		cout << "impar[" << k <<"] = " << impar[k] << endl;
	}

	for(int k = 0; k < p ;k++) {
		cout << "par[" << k <<"] = " << par[k] << endl;
	} 

	return 0;
}
