#include <cstdio>
#include <string.h>
#include <iostream>


using namespace std;

int main()
{
	
	int n, m, i, p, d, aux;
	char pedras[100];
	
	cin >> n >> m;
	memset(pedras, 0, n);
	
	for(i = 0; i < m; i++) {
		cin >> p >> d;	
		pedras[--p] = 1;
		aux = p;
		
		while(1) {
			aux -= d;
			
			if(aux < 0) {
				break;
			}
			pedras[aux] = 1;			
		}
		aux = p;
		
		while(1) {
			aux += d;
			
			if(aux >= n) {
				break;
			}
			pedras[aux] = 1;			
		}
	}
		
	for(i = 0; i < n; i++) {
		cout << (int)pedras[i] << endl;
	}
		
	return 0;
}
