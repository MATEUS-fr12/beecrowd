///INTERVALO 2 ///
#include <stdio.h>
int main(){
   int x,x1, i,in,out; 
   in = 0;
   out = 0;
   scanf("%d",&x1);
   for(i = 0; i < x1; i = i + 1){
        scanf("%d",&x);
        if( x >= 10 && x <=20){
            in = in + 1;
        }else{
            out = out + 1;
        }
   }
    printf("%d in\n%d out\n",in,out);
    return 0;
}
