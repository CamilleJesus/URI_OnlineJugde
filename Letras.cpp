#include <cstdio>
#include <iostream>
#include <iomanip>

#define MAXIMO 1100


using namespace std;

int main()
{     
    char array[MAXIMO], letra;
    int i, aux = 0, total = 0, aux2;    
    cin >> letra;
    
    while(scanf("%s", array) != EOF) {
        
        for(i = 0, total++; array[i] >= 32; i++) {
            
            if(array[i] == letra) {
                aux++;
                break;
            }
        }
    }
    cout << fixed << setprecision(1) << ((aux*100) / (double)total) << endl;
    
    return 0;
}
