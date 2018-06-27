#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n, caso = 1;
    scanf("%d", &n);

    while(n != 0) {
        char p1[20], p2[20];
        scanf("%s", p1);
        scanf("%s", p2);

        if((p1[0] == 'p') && (p1[1] == 'a')) {   //papel
            
            if((p2[0]=='p') && (p2[1]=='a')) {   //empate
                printf("Caso #%d: De novo!\n", caso);
            } else if(((p2[0] == 'p') && (p2[1] == 'e')) || (p2[0] == 'S')) {   //ganhou
                printf("Caso #%d: Bazinga!\n", caso);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", caso);
            }
        } else if((p1[0] == 'p') && (p1[1] == 'e')) {  //pedra
    
            if((p2[0] == 'p') && (p2[1] == 'e')) {   //empate
                printf("Caso #%d: De novo!\n", caso);
            } else if((p2[0] == 't') || (p2[0] == 'l')) {   //ganhou
                printf("Caso #%d: Bazinga!\n", caso);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", caso);
            }
        } else if(p1[0] == 't') {   //tesoura

            if(p2[0] == 't') {   //empate
                printf("Caso #%d: De novo!\n", caso);
            } else if(((p2[0] == 'p') && (p2[1] == 'a')) || (p2[0] == 'l')) {   //ganhou
                printf("Caso #%d: Bazinga!\n", caso);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", caso);
            }
        } else if(p1[0] == 'l') {   //lagarto

            if(p2[0] == 'l'){   //empate
                printf("Caso #%d: De novo!\n", caso);
            } else if(((p2[0] == 'p') && (p2[1] == 'a')) || (p2[0] == 'S')) {   //ganhou
                printf("Caso #%d: Bazinga!\n", caso);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", caso);
            }
        } else if(p1[0] == 'S') {   //spock

            if(p2[0] == 'S') {   //empate
                printf("Caso #%d: De novo!\n", caso);
            } else if(((p2[0] == 'p') && (p2[1] == 'e')) || (p2[0] == 't')) {   //ganhou
                printf("Caso #%d: Bazinga!\n", caso);
            } else {
                printf("Caso #%d: Raj trapaceou!\n", caso);
            }
        }
        n--;
        caso++;
    }
    
    return 0;
}
