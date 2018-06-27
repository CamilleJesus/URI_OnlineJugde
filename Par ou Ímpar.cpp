#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, valor;
    cin >> n;
    
    for (int i = 0; i< n; i++) {
    	cin >> valor;
    	
    	if (valor == 0) {
	    	cout << "NULL\n";
		} else if ((valor%2) == 0) {
	    	
	    	
    		if (valor > 0) {
    			cout << "EVEN POSITIVE\n";
			} else if (valor < 0) {
				cout << "EVEN NEGATIVE\n";
			}
		} else {
			
			if (valor > 0) {
    			cout << "ODD POSITIVE\n";
			} else if (valor < 0) {
				cout << "ODD NEGATIVE\n";
			}
		}
    	
	}
 
    return 0;
}
