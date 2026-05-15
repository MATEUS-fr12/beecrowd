#include <stdio.h>
int main(){
    float x;
    int cont =0;
    for (int i = 0; i < 6; i++){
        scanf("%f",&x);
        if (x>0){
            cont++;
        }
    }
    printf("%d valores positivos\n",cont);
    return 0;
}