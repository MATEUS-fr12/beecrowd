///DIVIDINDO X POR Y///
#include <stdio.h>
int main (){
    int n, x, y, i;
    float r = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i = i + 1){
        scanf("%d %d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }else{
            r = (x * 1.0) / (y) ;
            printf("%.1f\n", r);
        }
    }
}