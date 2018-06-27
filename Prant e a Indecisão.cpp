#include<cstdio>
#include<string.h>
#include<iostream>


using namespace std;

#define MAX 100000

int k, m, n, quantidade[26];
char cachorro[MAX], trocas[26], favoritas[26];
bool identificaFavoritas[26];

void letrasFavoritas()
{
	getchar();
	memset(identificaFavoritas, 0, sizeof(identificaFavoritas));
	
	for(int i = 0; i < k; i++) {
		identificaFavoritas[getchar() - 'a'] = true;
	}
}

void nomeCachorro()
{
	getchar();
	memset(quantidade, 0, sizeof(quantidade));
	
	for(int i = 0; i < m; i++) {
		quantidade[(cachorro[i] = getchar()) - 'a']++;
	}
	cachorro[m] = '\0';
}

void troca()
{
	
	for(int i = 0; i < 26; i++) {
		favoritas[i] = trocas[i] = i + 'a';
	}
}

int contaFavoritas()
{
	int favs = 0;
	
	for(int i = 0; i < 26; i++) {
		
		if(identificaFavoritas[i]) {
			favs += quantidade[i];
		} 
	}

	return favs;
}

void atualizaTroca(int a, int b)
{
	int pa, pb;
	
	for(int i = 0; i < 26; i++) {
		
		if(trocas[i] == a) {
			pa = i;
		}
		
		if(trocas[i] == b) {
			pb = i;
		}
	}
	swap(trocas[pa], trocas[pb]);
	swap(quantidade[a - 'a'], quantidade[b - 'a']);
}

void executaTroca()
{
	
	for(int i = 0; i < m; i++) {
		cachorro[i] = favoritas[cachorro[i] - 'a'];
	}
}


int main(void)
{
	int maxfav, aux;
	char a, b;

	while(scanf("%d %d %d", &k, &m, &n) != EOF) {
		letrasFavoritas();
		nomeCachorro();
		troca();
		maxfav = contaFavoritas();
		
		while(n--) {
			cin >> a >> b;
			atualizaTroca(a, b);
			aux = contaFavoritas();
			
			if(maxfav < aux){
				maxfav = aux;
				memcpy(favoritas, trocas, 26);
			}
		}
		executaTroca();
		cout << maxfav << endl;
		cout << cachorro << endl;
	}

	return 0;
}
