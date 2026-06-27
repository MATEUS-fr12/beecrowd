///A RESPOSTA DE THEON
#include <stdio.h>
#include <stdlib.h> 
int main(){
    int n, i, t, menor, posicao;
    scanf("%d", &n);
    menor = 100;
    posicao = 1;
    for(i = 1; i <= n; i++){
        scanf("%d", &t);
        if(t < menor){
            menor = t;
            posicao = i;
        }
    }
    printf("%d\n", posicao);
    return 0;
}