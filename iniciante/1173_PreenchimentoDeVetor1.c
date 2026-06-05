///PREENCHIMENTO DE VETOR///
#include <stdio.h>
int main(){
    int x;
    int n[10];
    if (scanf("%d", &x) != 1) return 1; 
    for(int i = x, j = 0; j < 10; i *= 2, j++){
        n[j] = i;
        printf("N[%d] = %d\n", j, n[j]);
    }
    return 0;
}