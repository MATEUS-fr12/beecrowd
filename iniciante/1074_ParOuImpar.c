///PAR OU IMPAR///
#include <stdio.h>
int main(){
    int x, y;
    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        scanf("%d", &y);
        if(y == 0){
            printf("NULL\n");
        }else if (y % 2 == 0){
                printf("EVEN ");
            }else{
                printf("ODD ");
            }if(y > 0){
                printf("POSITIVE\n");
            }else{
                printf("NEGATIVE\n");
            }
    }
    return 0;
}
