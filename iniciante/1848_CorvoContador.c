///CORVO CONTADOR
#include <stdio.h>
#include <stdlib.h> 
int main(){
    char entrada[10];
    int soma = 0;
    int gritos = 0;
    while(gritos < 3){
        scanf(" %[^\n]", entrada);
        if(entrada[0] == 'c'){
            printf("%d\n", soma);
            soma = 0;
            gritos++;
        }else{
            int valor = 0;
            if(entrada[0] == '*') valor += 4;
            if(entrada[1] == '*') valor += 2;
            if(entrada[2] == '*') valor += 1;
            soma += valor;
        }
    }
    return 0;
}