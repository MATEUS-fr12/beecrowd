///SALARIO///
#include <stdio.h> 
int main(){
    int n,h;
    double v,s;
    scanf("%d%d%lf",&n,&h,&v);
    s = h*v;
    printf("NUMBER = %d\n",n);
    printf("SALARY = U$ %.2lf\n",s);
    return 0;
}