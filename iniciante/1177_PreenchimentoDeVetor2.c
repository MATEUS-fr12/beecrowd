///PREENCHIMENTO DE VETOR 2///
#include <stdio.h>
int main(){
    int T, i;
    int N[1000];
    scanf("%d", &T);
    for(i = 0; i < 1000; i++){
        N[i] = i % T; 
        printf("N[%d] = %d\n", i, N[i]);
    }
    return 0;
}