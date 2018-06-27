#include <iostream>
#include <algorithm>


using namespace std;

int main() {
	int v[2], soma;
    cin >> v[0] >> v[1];
    
    while (v[0] && v[1]) {
    	
    	if ((v[0] < 0) || (v[1] < 0)) {
    		break;
		} else {			
		    sort(v, v+2);
		    soma =0;
		    
			for(;v[0] <= v[1]; v[0]++){
		        cout << v[0] << " ";
		        soma +=v[0];
		    }
		    cout<< "Sum=" << soma << endl;
		    cin >> v[0] >> v[1];
		}
    }

    return 0;
 }
