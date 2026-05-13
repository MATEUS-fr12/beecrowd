///SALARIO COM BONUS///
#include <stdio.h>
int main(){
    char nome[10];
    double sf,vf,t; 
    scanf("%s%lf%lf",&nome[25],&sf,&vf);
    t = sf+(vf*0.15);
    printf("TOTAL = R$ %.2lf\n",t);
    return 0;
}