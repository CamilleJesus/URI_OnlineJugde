#include<iostream>
#include <iomanip>


using namespace std;

int main()
{
	double salario, novoSalario, reajuste, percentual;
	cin >> salario >> setprecision(2);
	
	if ((salario > 0) && (salario <= 400)) {
		novoSalario = salario * 1.15;
		percentual = 15;
	} else if (salario <= 800) {
		novoSalario = salario * 1.12;
		percentual = 12;
	} else if (salario <= 1200) {
		novoSalario = salario * 1.10;
		percentual = 10;
	} else if (salario <= 2000) {
		novoSalario = salario * 1.07;
		percentual = 7;
	} else if (salario > 2000) {
		novoSalario = salario * 1.04;
		percentual = 4;
	}
	reajuste = novoSalario - salario;
	cout << "Novo salario: " << fixed << setprecision(2) << novoSalario << endl;
	cout << "Reajuste ganho: " << fixed << setprecision(2) << reajuste << endl;
	cout << "Em percentual: " << fixed << setprecision(0) << percentual << " %" << endl;
	
	return 0;
}
