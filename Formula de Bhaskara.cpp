#include<iostream>
#include<math.h>
#include <iomanip>


using namespace std;

int main()
{
	double a, b, c, delta, x, x1, x2;
	cin >> a >> b >> c;
	delta = ((b*b) - (4*a*c));
	
	if ((a == 0) || (delta < 0)) {
		cout<<"Impossivel calcular\n";		
	} else {
		
		x1 = (((-1*b) + sqrt(delta)) / (2*a));
		x2 = (((-1*b) - sqrt(delta)) / (2*a));
		cout<<"R1 = "<<x1;
		cout<<"R2 = "<<x2;
	}
	
	return 0;
}
