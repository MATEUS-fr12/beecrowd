///ACIMA DA DIAGONAL SECUNDARIA
#include <stdio.h>
int main(){
    char O;
    double M[12][12];
    double resultado = 0.0;
    scanf(" %c", &O);
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 11 - i; j++){
            resultado += M[i][j];
        }
    }
    if(O == 'M'){
        resultado /= 66.0;
    }
    printf("%.1lf\n", resultado);
    return 0;
}