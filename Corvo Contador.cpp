#include <iostream>
#include <string.h>
#include <cstdio>

using namespace std;

int main() {
    int a, b, c, d, e, f, soma = 0;
    char array[10];

    for(int i = 1; i <= 3; i++) {
        soma = 0;
        
        while(1) {
            cin.getline(array, 10);
            
            if(array[0] == 'c'){
                break;
            }

            if(array[0] == '-') {
                
                if(array[1] == '-') {
                    
                    if(array[2] == '-') {
                        soma += 0;
                    } else {
                        soma += 1;
                    }
                } else {
                    
                    if(array[2] == '-') {
                        soma += 2;
                    } else {
                        soma += 3;
                    }
                }
            } else if(array[0] == '*') {
                
                if(array[1] == '-') {
                    
                    if(array[2] == '-'){
                        soma += 4;
                    } else {
                        soma += 5;
                    }
                } else {
                    
                    if(array[2] == '-') {
                        soma += 6;
                    } else {
                        soma+=7;
                    }
                }
            }
        }
        cout << soma << endl;
    }

    return 0;
}
