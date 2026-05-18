///SEIS NUMEROS IMPARES///
#include <stdio.h>
int main(){
    int x,cont = 0;
    scanf("%d",&x);
    while (cont<6){
        if(x%2==0){
            x++;
        }else{
            printf("%d\n",x);
            cont++;
            x++;
        }
    }
    return 0; 
}   