#include <cstdio>
#include <string.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

typedef struct {
	char telefone[200];
}ListaTelefonica;

ListaTelefonica in[1000000];

int comp(const void *p1, const void *p2)
{
	ListaTelefonica *i = (ListaTelefonica *)p1, *j = (ListaTelefonica *)p2;

	return strcmp(i->telefone, j->telefone);
}

int main ()
{
	int n, c, d, p, c1;
	
	while(scanf("%d", &n) != EOF) {
		
		for(c = 0; c < n; c++) {
			cin >> in[c].telefone;
		}
		qsort(in, n, sizeof(ListaTelefonica), comp);
		
		for(c = 0, p = 0, c1 = 0, d = 0;c < n-1; c++) {
			
			while(d==0 && in[c].telefone[c1]!='\0') {
				
				if(in[c].telefone[c1] == in[c+1].telefone[c1]) {
					p++;
					c1++;
				} else {
					c1 = 0;
					d = 1;
				}
			}
			d = 0;					
		}
		cout << p << endl;
	}
	
	return 0;
}
