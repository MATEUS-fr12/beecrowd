///CONSUMO///
#include <stdio.h>
int main(){
    int x;
    float y,m;
    scanf("%d%f%f",&x,&y,&m);
    m = x/y; //formula para km/litro//
    printf("%.3f km/l\n",m);
    return 0;    
}