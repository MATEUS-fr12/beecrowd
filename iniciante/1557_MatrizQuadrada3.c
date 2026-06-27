///MATRIZ QUADRADA 3
#include <stdio.h>
int main(){
    int n, i, j, t, num, temp;
    while(scanf("%d", &n) && n != 0){
        t = 0;
        temp = 1 << ((n - 1) * 2);
        while(temp > 0){
            temp /= 10;
            t++;
        }
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                num = 1 << (i + j);
                if(j == 0){
                    printf("%*d", t, num);
                }else{
                    printf(" %*d", t, num);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}