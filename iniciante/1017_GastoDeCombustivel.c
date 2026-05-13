///GASTO DE COMBUSTIVEL///
#include <stdio.h>
#include <math.h>
int main(){
    double x,y,l;
    scanf("%lf%lf",&x,&y);
    l = (y*x)/12;
    printf("%.3lf\n",l);
    return 0;
}