#include <iostream>
#include <iomanip>

 
using namespace std;
 
int main() {
 
    int n;
	double valor, media = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
    	
    	for (int i2 = 0; i2 < 3; i2++) {
    		cin >> valor >> setprecision(1);
    		
    		if (i2 == 0) {
    			media = media + (valor * 2);
			} else if (i2 == 1) {
				media = media + (valor * 3);
			} else {
				media = media + (valor * 5);
			}
		}
		media = media/10;
		cout << fixed << setprecision(1) << media << endl;
		media = 0;	
	}
 
    return 0;
}
