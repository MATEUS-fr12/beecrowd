///SOMANDO INTEIROS CONSECUTIVOS
#include <stdio.h>
int main(){
    int A, N,soma = 0;
    scanf("%d", &A);
    do{
        scanf("%d", &N);
    }while(N <= 0);
    for (int i = 0; i < N; i++) {
        soma += (A + i);
    }
    printf("%d\n", soma);
    return 0;
}