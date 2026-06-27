///MATRIZ QUADRADA 4
#include <stdio.h>
int main(){
    int n, i, j;
    while(scanf("%d", &n) != EOF){
        int limite_inicio = n / 3;
        int limite_fim = n - limite_inicio - 1;
        int centro = n / 2;
        for(i = 0; i < n; i++){
            for(j = 0; j < n; j++){
                if(i == centro && j == centro){
                    printf("4");
                }else if(i >= limite_inicio && i <= limite_fim && j >= limite_inicio && j <= limite_fim){
                    printf("1");
                }else if(i == j){
                    printf("2");
                }else if(i + j == n - 1){
                    printf("3"); 
                }else{
                    printf("0");
                }
            }
            printf("\n"); 
        }
        printf("\n"); 
    }
    return 0;
}