#include <iostream>
 

using namespace std;
  
int main (int argc, const char * argv[])
{
    int i, diaInicio, horaInicio, minutoInicio, segundoInicio, diaTermino, horaTermino, minutoTermino, segundoTermino, seg1, seg2;
 	string c;
    cin >> c >> diaInicio >> horaInicio >> c >> minutoInicio >> c >> segundoInicio >> c >> diaTermino >> horaTermino >> c >> minutoTermino >> c >> segundoTermino;        
    seg1 = 3600*horaInicio + 60*minutoInicio + segundoInicio;

    if ((diaTermino - diaInicio) == 0) {
        seg2 = 3600*horaTermino + 60*minutoTermino + segundoTermino - seg1;
    } else {
        seg2 = ((diaTermino-diaInicio-1) * 86400) + (86400-seg1) + 3600*horaTermino + 60*minutoTermino + segundoTermino;
    }
	cout << (seg2 / 86400) << " dia(s)" << endl;
    cout << (seg2%86400) / 3600 << " hora(s)" << endl;
    cout << ((seg2%86400) % 3600) / 60 << " minuto(s)" << endl;
    cout << ((seg2%86400) % 3600) % 60 << " segundo(s)" << endl;
   
    return 0;
}
