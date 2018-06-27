#include <cstdio>
#include <string.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

typedef struct{
	char nome[100];
	char cor[10];
	char tamanho;
}Aluno;

int Compara(const void *p1, const void *p2)
{
	Aluno *i = (Aluno *)p1, *j = (Aluno *)p2;
	
	if(strcmp(i->cor, j->cor) == 0) {
		
		if(i->tamanho > j->tamanho)
			return -1;
		else {
			
			if(i->tamanho < j->tamanho) {
				return 1;
			} else {
				return (strcmp(i->nome, j->nome));
			}
		}
	} else {
		return (strcmp(i->cor, j->cor));
	}
}

int main()
{	
	Aluno turma[60];
	int n, i, j = 0;
	char nome[100];
	
	while(scanf("%d ", &n) && n != 0) {
		
		for(i = 0; i < n; i++) {
			cin.getline(nome, sizeof(nome));
			strcpy(turma[i].nome, nome);
			scanf("%s %c ", turma[i].cor, &turma[i].tamanho);
		}
		qsort(turma, n, sizeof(Aluno), Compara);
		
		if(j) {
			cout << endl;
		} else {
			j++;
		}
		
		for(i = 0; i < n; i++) {
			cout << turma[i].cor << " " << turma[i].tamanho << " " << turma[i].nome << endl;
		}
	}
	
	return 0;
}
