///NOTAS E MOEDAS///
#include <stdio.h>
#include <math.h>
int main(){
    double
    valor, x;
    int
    y,z,
    nota100, nota50, nota20, nota10, nota5, nota2, 
    resto100, resto50, resto20, resto10, resto5, resto2,

    moeda1,moeda50,moeda25,moeda10,moeda5,moeda01,
    restom1,restom50,restom25,restom10,restom5,restom01;

    scanf ("%lf", &valor);
    z=valor;
    //notas de 100//
    nota100 = z / 100;
    resto100 = z % 100;
    //notas de 50//
    nota50 = resto100 / 50;
    resto50 = resto100 % 50;
    //notas de 20//
    nota20 = resto50 / 20;
    resto20 = resto50 % 20;
    //notas de 10//
    nota10 = resto20 / 10;
    resto10 = resto20 % 10;
    //notas de 5//
    nota5 = resto10 / 5;
    resto5 = resto10 % 5;
    //notas de 2//
    nota2 = resto5 / 2;
    resto2 = resto5 % 2;

    x = valor*100;
    y = (int) x;
    ///Moedas//
    //moedas de 1//
    moeda1 = y %100;
    //moedas de 0.50//
    restom1 = moeda1/50;
    moeda50 = moeda1 %50;
    //moedas de 0.25//
    restom50 = moeda50 /25;
    moeda25 = moeda50 %25;
    //moedas de 0.10//
    restom25 = moeda25 /10;
    moeda10 = moeda25 %10;
    //moedas de 0.05//
    restom10 = moeda10 /5;
    moeda5 = moeda10 %5;
    printf ("NOTAS:\n");
    printf ("%d nota(s) de R$ 100.00\n", nota100);
    printf ("%d nota(s) de R$ 50.00\n", nota50);
    printf ("%d nota(s) de R$ 20.00\n", nota20);
    printf ("%d nota(s) de R$ 10.00\n", nota10);
    printf ("%d nota(s) de R$ 5.00\n", nota5);
    printf ("%d nota(s) de R$ 2.00\n", nota2);
    printf ("MOEDAS:\n");
    printf ("%d moeda(s) de R$ 1.00\n",resto2);
    printf ("%d moeda(s) de R$ 0.50\n",restom1);
    printf ("%d moeda(s) de R$ 0.25\n",restom50);
    printf ("%d moeda(s) de R$ 0.10\n",restom25);
    printf ("%d moeda(s) de R$ 0.05\n",restom10);
    printf ("%d moeda(s) de R$ 0.01\n",moeda5);
  return 0;
}
