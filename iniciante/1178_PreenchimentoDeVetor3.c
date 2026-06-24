///PREENCHIMENTO DE VETOR 3///
#include <stdio.h>
#include <stdlib.h>
int main(){
    double x, vetor[100];
    scanf("%lf",&x);
    for (int i = 0; i < 100; i++){
        vetor[i] = x;
        x = x/2;
    }
    for (int i = 0; i < 100; i++){
        printf("N[%d] = %.4lf\n",i,vetor[i]);
    }
    return 0 ;
}
