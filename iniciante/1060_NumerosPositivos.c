///NUMEROS POSITIVOS///
#include <stdio.h>
int main(){
    float x;
    int cont =0;
    for (int i = 0; i < 6; i++){
        scanf("%f",&x);
        if (x>0){
            cont++;
        }else if(x==0){
            i--;
        }
    }
    printf("%d valores positivos\n",cont);
    return 0;
}