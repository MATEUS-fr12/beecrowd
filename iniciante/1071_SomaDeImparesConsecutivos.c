///SOMA DE IMPARES CONSECUTIVOS///
#include <stdio.h>
int main(){
    int x, y, soma = 0;
    int min, max;
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
    return 0;
}