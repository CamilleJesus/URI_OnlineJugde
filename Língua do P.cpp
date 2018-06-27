#include <stdio.h>
#include <iostream>

#define MAXIMO 1000


using namespace std;

int main()
{ 
    char in[MAXIMO];
    int i, j;
    fgets(in, MAXIMO, stdin);
    
    for(i = 0; in[i] >= 32; i++);
    in[i] = '\0';
    
    for(i = 0, j = 1; in[i] != '\0'; i++) {
        
        if(in[i] == 'p' && j) {
            j = 0;
        } else {
            cout << in[i];
            j = 1;
        }
	}
    cout << endl;
    
    return 0;
}
