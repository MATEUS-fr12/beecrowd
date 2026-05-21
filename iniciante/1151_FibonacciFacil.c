///FIBONACCI FACIL///
#include <stdio.h>
int main(){
    int x, i, y1, y2, y3;
    y1 = 0;
    y2 = 1;
    y3 = 0;
    scanf("%d",&x);
    if(x == 0 || x == 1){
        printf("%d ",y1);
    }
        printf("%d ",y1);
    for(i = 2; i < x; i = i + 1)
    {
        y1 = y2;
        y2 = y3;
        y3 = y1 + y2;
        printf("%d ",y3);
    }
    printf("%d\n",y3+y2);
    return 0;
}
