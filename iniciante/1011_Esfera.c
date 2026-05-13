///ESFERA///
#include <stdio.h> 
#include <math.h>
    int main(){
        double r,a;                       
        scanf("%lf",&r);                     
        a = (4/3.0) * 3.14159 * (r*r*r);//formula para o volume de uma esfera.
        printf("VOLUME = %.3lf\n",a);          
        return 0;
    }