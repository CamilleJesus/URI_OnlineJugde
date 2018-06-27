#include <cstdio>
#include <string.h>
#include <iostream>

using namespace std;

int main() {
    int a;
    long long int b, c, d;
    char aa[201], bb[10], cc[201], dd[10];
    cin >> a;
    
    for(int i = 1; i <= a; i++) {
        cin >> aa >> bb >> cc >> dd >> b >> c;
        d = b + c;
        
        if(bb[0] == 'P') {
            
            if(d%2 == 0) {
                cout << aa << endl;
            } else {
                cout << cc << endl;
            }
        } else {
            
            if(d%2==0) {
                cout << cc << endl;
            }
            else {
                cout << aa << endl;
            }
        }
    }

    return 0;
}

