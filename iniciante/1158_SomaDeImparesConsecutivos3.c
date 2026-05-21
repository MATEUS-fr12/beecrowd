///SOMA DE IMPARES CONSECUTIVOS///]
#include <stdio.h>
int main(){
    int N;
    if (scanf("%d", &N) != 1) return 0;
    for (int i = 0; i < N; i++){
        int X, Y;
        scanf("%d %d", &X, &Y);
        if (X % 2 == 0){
            X++;
        }
        int soma = 0;
        for (int j = 0; j < Y; j++) {
            soma += X;
            X += 2;
        }
        printf("%d\n", soma);
    }
    return 0;
}