#include<iostream>
#include <iomanip>


using namespace std;

int main()
{
	int ca, ba, pa, cr, br, pr, sem = 0;
	cin >> ca >> ba >> pa >> cr >> br >> pr;
	
	if (ca < cr) {
		sem = cr - ca;
	}
	
	if (ba < br) {
		sem = sem + (br - ba);
	}
	
	if (pa < pr) {
		sem = sem +  pr - pa;
	}
	
	cout << sem << "\n";
	
	return 0;
}
