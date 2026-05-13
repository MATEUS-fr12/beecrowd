/// CALCULO SIMPLES///
#include <stdio.h> 
int main(){
    int 
    cp1,cp2,///código do produto
    n1,n2;///o número de peças
    double v1,v2,t; ///o valor unitário de cada peça
    scanf("%d%d%lf%d%d%lf",&cp1,&n1,&v1,&cp2,&n2,&v2);
    t = (n1*v1)+(n2*v2);
    printf("VALOR A PAGAR: R$ %.2lf\n",t);
    return 0;
    
}