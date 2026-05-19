///SOMA DE IMPARES CONSECUTIVOS 2///
#include <stdio.h>
int main(){
    int x, y, soma = 0;
    int min, max;
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        soma = 0;
        scanf("%d%d", &x, &y);
        if(x < y){
            min = x;
            max = y;
        }else{
            min = y;
            max = x;
        }
        for(int i = min + 1; i < max; i++){
            if (i % 2 != 0){
                soma = soma + i;
            }
        }
        printf("%d\n", soma);  
    } 
    return 0;
}