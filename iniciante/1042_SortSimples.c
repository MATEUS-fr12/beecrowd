///SORT SIMPLES///
#include <stdio.h>
int main(){
    int a, b, c, m, x, y, z;
    scanf("%d %d %d", &a, &b, &c);
    x=a;
    y=b;
    z=c;
    if(x>y){
        m=x;
        x=y;
        y=m;
    }
    if(x>z){
        m=x;
        x=z;
        z=m;
    }
    if(y>z){
        m=y;
        y=z;
        z=m;
    }
    printf("%d\n%d\n%d\n\n", x, y, z);
    printf("%d\n%d\n%d\n\n", a, b, c);
    return 0;
}