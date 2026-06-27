///A CORRIDA DE LESMAS
#include <stdio.h>
int main(){
    int l, v, max, i;
    while(scanf("%d", &l) != EOF){
        max = 0;
        for(i = 0; i < l; i = i + 1){
            scanf("%d", &v);
            if(v > max){
                max = v;
            }
        }
        if(max < 10){
            printf("1\n");
        }else if(max < 20){
            printf("2\n");
        }else{
            printf("3\n");
        }
    }
    return 0;
}