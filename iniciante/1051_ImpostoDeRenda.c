///IMPOSTO DE RENDA///
#include <stdio.h>
int main(){
    float salario_inicial, salario_final;
    scanf("%f", &salario_inicial);
        if(salario_inicial <= 2000){
            printf("Isento\n");
        }else if(salario_inicial <= 3000){
            salario_final = (salario_inicial - 2000) * 0.08;
            printf("R$ %.2f\n", salario_final);
        }else if(salario_inicial <= 4500){
            salario_final = (salario_inicial - 3000) * 0.18 + (1000*0.08);
            printf("R$ %.2f\n", salario_final);
        }else if( salario_inicial > 4500){
            salario_final = (salario_inicial - 4500) * 0.28 + (1500*0.18) + (1000*0.08) ;
            printf("R$ %.2f\n", salario_final);
        }
    return 0;
}
