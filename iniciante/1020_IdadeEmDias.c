///IDADE EM DIAS///
#include <stdio.h>
#include <math.h>
int main(){
    int n,a,m,d;
    scanf("%d",&n);
    a= n/365;
    m= (n-a*365)/30;
    d= (n-a*365-m*30);
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
    return 0;
}