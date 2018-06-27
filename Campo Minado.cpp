#include<cstdio>
#include<iostream>


using namespace std;

int main()
{
	int n, i, vetor[50], out;
	cin >> n;
	
	for(i = 0; i < n; i++) {
		cin >> vetor[i];
	}

	for(i = 0; i < n; i++) {
		out = 0;
		
		if(i-1 >= 0) {
			out += vetor[i-1];
		}
		
		if(i+1 < n) {
			out += vetor[i+1];
		}
		cout << vetor[i] + out << endl;
	}
	
	return 0;
}
