#include <iostream>
 
 
using namespace std;
 
int main() {
	int n, x, y, soma;
	cin >> n;
	 
	for(int i = 0; i < n; i++) {
		soma = 0;
		cin >> x  >> y;
		
		if ((x%2) == 0) {
			x = x + 1;
		}
		
		for (int j = 0; j < y; j++) {
			soma = soma + (x + (2*j));
		}
		cout << soma << endl;
	}
	
    return 0;
}
