///MATRIZ QUADRADA 1
#include <stdio.h>
int main(){
    int N;
    while(scanf("%d", &N) && N != 0){
        for(int i = 0; i < N; i++){
            for(int j = 0; j < N; j++){
                int v = i;
                if(j < v) v = j;
                if(N - 1 - i < v) v = N - 1 - i;
                if(N - 1 - j < v) v = N - 1 - j;
                if(j == 0){
                    printf("%3d", v + 1);
                }else{
                    printf(" %3d", v + 1);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}