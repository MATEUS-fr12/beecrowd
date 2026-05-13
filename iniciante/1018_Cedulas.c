///CEDULAS///
#include <stdio.h>
#include <math.h>
/* OBS -> cedulas inteiros */ 
int main(){
    int
    valor,
    nota100,nota50,nota20,nota10,nota5,nota2,nota1,
    resto100,resto50,resto20,resto10,resto5,resto2,resto1;
    scanf("%d",&valor);
    ///calculo///
    //notas de 100//
    nota100 = valor / 100;
    resto100 = valor % 100;
    //notas de 50//
    nota50 = resto100 / 50;
    resto50 = resto100 % 50;
    //notas de 20//
    nota20 = resto50 / 20;
    resto20 = resto50 % 20;
    //notas de 10//
    nota10 = resto20 / 10;
    resto10 = resto20 % 10;
    //notas de 10//
    nota5 = resto10 / 5;
    resto5 = resto10 % 5;
    //notas de 2//
    nota2 = resto5 / 2;
    resto2 = resto5 % 2;
    //notas de 1//
    nota1 = resto2 / 1;
    resto1 = resto2 % 1;
    ///mostrar resultado///
    printf("%d\n",valor);
    printf("%d nota(s) de R$ 100,00\n",nota100);
    printf("%d nota(s) de R$ 50,00\n",nota50);
    printf("%d nota(s) de R$ 20,00\n",nota20);
    printf("%d nota(s) de R$ 10,00\n",nota10);
    printf("%d nota(s) de R$ 5,00\n",nota5);
    printf("%d nota(s) de R$ 2,00\n",nota2);
    printf("%d nota(s) de R$ 1,00\n",nota1);   
    return 0;
}