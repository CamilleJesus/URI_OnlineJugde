#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n, m, i, j, k = 0, t, qtdMax = 0;
    string c, s;
    cin >> n;

    for(i = 0; i < n ; i++) {
            cin >> c;

            if(i%2 != 0) {
               reverse(c.begin(),c.end());
               
               	for( j = i*n ,t = 0; j < (i+1) * n ; j++, t++) {
                 	s += c[t];
               	}
           	} else {
            	
            	for( j = i*n,t = 0; j < (i+1)*n ; j++,t++) {
            		s += c[t];
            	}
            }
        c.clear();
    }

	for(i = 0; i < s.size(); i++) {

		while(s[i] != 'A') {
		        
	        if(s[i] == 'o') {
	         k++;
	        }
	        
	        if(s[i+1] == 'A' or s[i] == '\0') {
	            qtdMax = max(qtdMax,k);
	            k = 0;
	        }
			
			if(s[i] == '\0') {
				break;
			}
			i++;
		}
	}
	cout << qtdMax << endl;

	return 0;
}
