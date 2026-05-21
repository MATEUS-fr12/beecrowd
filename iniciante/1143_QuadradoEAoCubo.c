///QUNADRADO E AO CUBO///
#include <stdio.h>
int main(){
    int x, i;
    scanf("%d", &x);
    for (i = 1; i <= x; i = i + 1){
        if (i * 2 != 0){
            printf("%d %d %d\n", i ,i*i,i*i*i);
        }
    }
    return 0;    
}
