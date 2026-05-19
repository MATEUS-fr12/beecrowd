///MEDIA PONDERADAS///
#include <stdio.h>
int main(){
    int N;
    float soma=0,x1,x2,x3;
    scanf("%d",&N);
    for(int i = 0; i < N; i++){
        scanf("%f%f%f",&x1,&x2,&x3);
        soma = ((x1*2)+(x2*3)+(x3*5))/10; 
        printf("%.1f\n",soma);
    }
    return 0;
}