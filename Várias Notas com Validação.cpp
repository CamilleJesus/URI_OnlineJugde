#include <iostream>
#include <stdio.h>
 
using namespace std;
 
int main() {

	int contador = 0;
	float nota;
	float notas[2];
	int x;
	
	do {
		contador = 0;
	while (contador <2){
		cin >> nota;
		
		if (nota >=0 && nota <=10){
			notas[contador] = nota;
			contador++;
		} else {
			cout << "nota invalida"<< endl;
		}
	}
	printf("media = %.2f\n",( notas[0]+notas[1])/2);
	
	do {
		cout << "novo calculo (1-sim 2-nao)" << endl;
		cin >> x;
	} while ((x!=1) && (x !=2));
	} while (x == 1);
	
    return 0;
}
