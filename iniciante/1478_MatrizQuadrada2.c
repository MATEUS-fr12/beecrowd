///MATRIZ QUADRADA 2
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, i, j;
    while(scanf("%d", &n) && n != 0){
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                int valor = abs(i - j) + 1;
                if(j == 0){
                    printf("%3d", valor);
                }else{
                    printf(" %3d", valor);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}