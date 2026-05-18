///POSITIVOS E MEDIA///
#include <stdio.h>
int main(){
    int i,vp;
    vp = 0;
    float x, x1, M;
    x1 = 0;
    for( i = 0 ; i < 6 ; i = i+1){
        scanf("%f",&x);
        if(x>0){
            vp = vp + 1;
            x1 = x1 + x;
        }
    }
    M = x1 / vp;
    printf("%d valores positivos\n%.1f\n",vp,M);
    return 0;
}