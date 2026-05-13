///TESTE DE SELECAO 1 ///
#include <stdio.h>
int main(){
    int A, B, C, D, x, y;
    scanf("%d %d %d %d", &A, &B, &C, &D);
    x = C + D;
    y = A + B;
    if (B > C && D > A && x > y && x > 0 && y > 0 && A % 2 == 0) {
        printf("Valores aceitos\n");
    }else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}
