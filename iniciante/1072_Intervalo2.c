///INTERVALO 2 ///
#include <stdio.h>
int main(){
    int x,x1,in = 0,out=0; 
    scanf("%d",&x1);
    for(int i = 0; i < x1; i = i + 1){
        scanf("%d",&x);
        if( x >= 10 && x <=20) in++;
        else out++;
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}
