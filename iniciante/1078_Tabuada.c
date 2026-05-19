///TABUADA///
#include <stdio.h>
int main(){
    int x,x1,i;
    scanf("%d",&x1);
        for(i = 1; i <=10; i++){
            x = i * x1;
            printf("%d x %d = %d\n",i,x1,x);
        }
    return 0;
}
