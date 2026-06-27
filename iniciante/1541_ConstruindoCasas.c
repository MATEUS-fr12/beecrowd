///CONSTRUINDO CASAS
#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, lado;
    while(scanf("%d", &a) && a != 0){
        scanf("%d %d", &b, &c);
        lado = sqrt((a * b * 100.0) / c);
        printf("%d\n", lado);
    }
    return 0;
}