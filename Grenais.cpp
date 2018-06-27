#include <iostream>
 

using namespace std;
 
int main() { 
    int quantidade = 0, gremio = 0, inter = 0, golsg, golsi, escolha;

    do {
        cin >> golsi >> golsg;
        quantidade++;
        
        if (golsi > golsg) {
          inter++;
        } else if (golsg > golsi) {
            gremio++;
        }
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> escolha;
    } while (escolha == 1);
    cout << quantidade << " grenais" << endl;
    cout << "Inter:" << inter << endl;
    cout << "Gremio:" << gremio << endl;
    cout << "Empates:" << quantidade-(gremio + inter) << endl;
    
    if (gremio > inter) {
        cout << "Gremio venceu mais" << endl;
    } else if ( inter > gremio) {
        cout << "Inter venceu mais" << endl; 
    } else {
        cout << "Nao houve vencedor" << endl;
    }

    return 0;
}
