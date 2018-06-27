#include <iostream>


using namespace std;

int main()
{
    int aux, array[20];

    for (int i = 0; i < 20; i++) {
        cin >> array[i];
    }

    for(int i = 0; i <10; i++){
        aux = array[19-i];
        array[19-i] = array[i];
        array[i] = aux;
    }

    for(int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << array[i] << endl;
    }
    
    return 0;
}
