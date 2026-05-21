///SOMA DE PARES CONSECUTIVOS///
#include <stdio.h>
int main(){
    int soma,X;
    while(1){
        if (scanf("%d", &X) != 1 || X == 0) break;
        if(X % 2 != 0) X++;
        soma = 5 * X + 20;
        printf("%d\n", soma);
    }
    return 0;
}