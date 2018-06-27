#include<iostream>
#include <iomanip>


using namespace std;

int main()
{
	double a, b, c, aux1, aux2, perimetro, area;
	cin >> a >> b >> c;
	aux1 = b - c;
	
	if (aux1 < 0) {
		aux1 = aux1 * -1;
	}
	aux2 = b + c;
	
	if ((a > aux1) && (a < aux2)) {
		perimetro = a + b + c;
		cout << "Perimetro = " << fixed << setprecision(1) << perimetro << endl;
	} else {
		area = (((a + b) * c)/2);
		cout << "Area = " << fixed << setprecision(1) << area << endl;
	}
	
	return 0;
}
