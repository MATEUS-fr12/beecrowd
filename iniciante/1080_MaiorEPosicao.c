///MAIOR E POSICAO///
#include <stdio.h>
int main(){
    int valores[100];
    int maior, posicao, i;
    for (i = 0; i < 100; i++) {
        scanf("%d", &valores[i]);
    }
    maior = valores[0];
    posicao = 0;
    for (i = 1; i < 100; i++) {
        if (valores[i] > maior){ 
            maior = valores[i];
            posicao = i;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", posicao + 1);
    return 0;
}
