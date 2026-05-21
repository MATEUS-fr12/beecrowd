///FATORIAL SIMPLES///
#include <stdio.h>
int main(){
    int x, i,x1;
    i = 0;
    x1 = 1;
    scanf("%d",&x);
    for(i = x ; i >=1 ; i = i - 1){
        x1 = x1 * i; 
    }
    printf("%d\n",x1);
    return 0;
}
