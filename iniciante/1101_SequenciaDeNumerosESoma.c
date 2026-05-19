///SEQUENCIA DE NUMEROS E SOMA///
#include <stdio.h>
int main(){
    int m, n;
    int min, max, soma;
    while(1){
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0){
            break;
        }
        if (m < n){
            min = m;
            max = n;
        }else{
            min = n;
            max = m;
        }
        soma = 0;
        for(int i=min;i<=max;i++){
            printf("%d ", i); 
            soma += i;        
        }
        printf("Sum=%d\n", soma);
    }
    return 0;
}