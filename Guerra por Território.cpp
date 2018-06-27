#include <iostream>
#include <vector>


using namespace std;

int main()
{
    int n, comprimento, secao, soma = 0, total = 0;
    vector<int>v;
    cin >> n;
    
    while(n--) {
        cin >> comprimento;
        v.push_back(comprimento);
        total += comprimento;
    }

    for (int i = 0; i < (int)v.size(); i++) {
        soma += v[i];
        
        if(soma == (total - soma)) {
            secao = i;
            break;
        }
    }
    cout << secao + 1 << endl;

    return 0;
}
