#include<iostream>
#include <iomanip>


using namespace std;

int main()
{
	double renda, imposto, aux, aux2, aux3 = 0;
	cin >> renda >> setprecision(2);

	if (renda > 4500) {
		aux = renda - 4500;
		aux2 = aux * 0.28;
		renda = renda - aux;
		aux3 = aux2;
	}
	
	if ((renda > 3000) && (renda <= 4500)) {
		aux = renda - 3000;
		aux2 = aux * 0.18;
		renda = renda - aux;
		aux3 = aux3 + aux2;
	}
	
	if ((renda > 2000) && (renda <= 3000)) {
		aux = renda - 2000;
		aux2 = aux * 0.08;
		aux3 = aux3 + aux2;
	}
			
	if ((renda > 0) && (renda <= 2000)) {
		cout << "Isento\n";
	}
	
	if (aux3 > 0) {
		cout << "R$ " << fixed << setprecision(2) << aux3 << endl;
	}
	
	return 0;
}
