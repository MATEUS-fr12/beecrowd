///AREA///
#include <stdio.h>
#include <math.h>
int main(){
    float 
        a,b,c,
        AP,AC,AT,AQ,AR;
    scanf("%f%f%f",&a,&b,&c);
    ///FORMULAS///
    AP = (a*c)/2; // Area do triangulo;
    AC = (c*c)*3.14159; // Area do circulo;
    AT = ((a+b)*c)/2; // Area do trapezio;
    AQ = (b*b); // Area do quadrado;
    AR = (a*b); // area do retangulo;
    printf("TRIANGULO: %.3f\n",AP);
    printf("CIRCULO: %.3f\n",AC);
    printf("TRAPEZIO: %.3f\n",AT);
    printf("QUADRADO: %.3f\n",AQ);
    printf("RETANGULO: %.3f\n",AR);
    return 0;
}