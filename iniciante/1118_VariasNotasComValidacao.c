///VARIAS NOTAS COM VALIDAÇÃO///
#include <stdio.h>
int main(){
    double nota, soma;
    int notas_validas, opcao;
    while(1){
        notas_validas = 0;
        soma = 0;
        while(notas_validas < 2){
            if (scanf("%lf", &nota) != 1) return 0;
            if(nota >= 0.0 && nota <= 10.0){
                soma += nota;
                notas_validas++;
            }else{
                printf("nota invalida\n");
            }
        }
        printf("media = %.2f\n", soma / 2.0);
        while(1){
            printf("novo calculo (1-sim 2-nao)\n");
            if(scanf("%d", &opcao) != 1) return 0;
            if(opcao == 1 || opcao == 2){
                break;
            }
        }
        if(opcao == 2){
            break;
        }
    }
    return 0;
}