#include <iostream>
#include <stdio.h>


using namespace std;

int main() {
    int x,y,soma = 0;
    cin >> x >> y;

    if (x > y) {
        
		if((y%2) == 0) {
            y++;
		} else {
            y += 2;
    	}
    	
		while (y < x){
            soma = soma + y;
            y = y + 2;
        }
    } else {
        
		if((x%2) == 0) {
            x++;
        } else {
            x+=2;
        }
        
        while (x < y){
            soma = soma + x;
            x = x + 2;
        }
    }
    cout << soma << endl;

	return 0;
}
