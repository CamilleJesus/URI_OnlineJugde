#include <stdio.h>
#include <string.h>
#include <iostream>


using namespace std;

int array[200];

int main()
{
  int aeroportos, voos, x, y, teste = 1, aeroMax, i;

  	while (scanf("%d %d", &aeroportos, &voos) == 2 && (aeroportos > 0)) {
    	memset(array, 0, sizeof(array));
    	
    	while ((voos--) > 0) {
			cin >> x >> y;
			array[x]++;
			array[y]++;
		}
      	aeroMax = array[1];
      	
      	for (i = 2; i <= aeroportos; i++) {
			
			if (array[i] > aeroMax) {
			  aeroMax = array[i];
			}
		}
		cout << "Teste " << teste++ << endl;
      
		for (i = 1; i <= aeroportos; i++) {

			if (array[i] == aeroMax) {
				cout << i << " ";
			}
		}
      	cout << endl << endl;
    }

  return 0;
}
