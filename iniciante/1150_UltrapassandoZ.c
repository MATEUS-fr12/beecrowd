///ULTRAPASSANDO Z///
#include <stdio.h>
int main(){
    int X, Z;
    if (scanf("%d", &X) != 1) return 0;
    do{
        if (scanf("%d", &Z) != 1) return 0;
    } while (Z <= X);
    int soma = 0;
    int contagem = 0;
    int atual = X;
    while (soma <= Z){
        soma += atual;
        atual++;
        contagem++;
    }
    printf("%d\n", contagem);
    return 0;
}