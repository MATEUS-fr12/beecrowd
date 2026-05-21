///SEQUENCIA LOGICA 2///
#include <stdio.h>
int main(){
    int x, y;
    scanf("%d%d",&x,&y);
    for(int i = 1; i <= y; i = i + 1 ){
        printf("%d",i);
        if(i % x == 0) printf("\n");
        else printf(" ");
    }
    return 0;
}
