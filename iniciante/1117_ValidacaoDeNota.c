///VALIDAÇÃO DE NOTA///
#include <stdio.h>
int main(){
    double x,y,z=0,w=0;
    while(1){
        if(w==2){
            break;
        }
        scanf("%lf", &x);
        if(x>=0 && x<=10){
            w++;
            z+=x;
        }else{
            printf("nota invalida\n");
        }
    }
    y=((w+z)- 2)/2;
    printf("media = %.2lf\n", y);
    return 0;
}