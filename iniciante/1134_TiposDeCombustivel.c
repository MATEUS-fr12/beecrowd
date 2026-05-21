///TIPOS DE COMBUSTIVEL///
#include <stdio.h>
int main(){
    int codigo;
    int a = 0, g = 0, d = 0;
    while (1){
        scanf("%d", &codigo);
        if(codigo == 4){
            break; 
        }else if (codigo == 1){
            a++;
        }else if(codigo == 2){
            g++;
        }else if(codigo == 3){
            d++;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);

    return 0;
}