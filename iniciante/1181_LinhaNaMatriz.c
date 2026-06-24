///LINHA NA MATRIZ///
#include <stdio.h>
int main(){
    int linha_alvo;
    char operacao;
    float matriz[12][12];
    float soma = 0.0;
    scanf("%d", &linha_alvo);
    scanf(" %c", &operacao);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    for(int j = 0; j < 12; j++){
        soma += matriz[linha_alvo][j];
    }
    if(operacao == 'S'){
        printf("%.1f\n", soma);
    }else if(operacao == 'M'){
        printf("%.1f\n", soma / 12.0);
    }
    return 0;
}