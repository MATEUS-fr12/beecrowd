///PARES IMPARES POSITIVOS E NEGATIVOS///
#include <stdio.h>
int main(){
    int i,x,num_positivo,num_negativos,num_pares,num_impares;
    num_positivo = 0;
    num_negativos = 0;
    num_impares = 0;
    num_pares = 0;
    for(i = 0; i < 5; i = i + 1){
        scanf("%d",&x);
        if(x>0){
            num_positivo = num_positivo + 1;
        }else if(x<0){
                num_negativos = num_negativos + 1;
            }

        if(x % 2 != 0){
            num_impares = num_impares +1;
        }else if(x % 2 == 0){
                num_pares = num_pares + 1;
            }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",num_pares,num_impares,num_positivo,num_negativos);
    return 0;
}
