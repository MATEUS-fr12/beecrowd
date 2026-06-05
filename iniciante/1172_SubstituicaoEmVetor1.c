///SUBSTITUICAO EM VETOR 1///
#include <stdio.h>
int main(){ 
    int y,tam = 10;
    int x[tam];
    for (int i = 0; i < tam; i++){
        scanf("%d",&y);
        if(y==0 || y<0){
            x[i]=1;
        }else{
            x[i]=y;
        }
    }
    for (int i = 0; i < tam; i++){
        printf("X[%d] = %d\n",i,x[i]);
    }
    return 0;
}