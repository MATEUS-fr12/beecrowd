///IDADE///
#include <stdio.h>
int main(){
    int i, x, y,c; 
    float M; 
    c = 1;
    y = 0;
    i = 0;
    while(c == 1){
        scanf("%d", &x);
        if(x >= 0){
            y = y + x;
            i = i + 1;
        }else{
             c = 0; 
        }
    }
    if(i > 0)
    {
        M = (float)y / i;
    }
    printf("%.2f\n", M);
    return 0;
}