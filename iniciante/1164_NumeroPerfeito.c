///NUMERO PERFEITO///
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    if (scanf("%d", &n) != 1) return 0;
    while (n--){
        long long x;
        scanf("%lld", &x);
        if (x <= 1){
            printf("%lld nao eh perfeito\n", x);
            continue;
        }
        long long soma = 1; 
        long long limite = sqrt(x);
        for(long long i = 2; i <= limite; i++){
            if(x % i == 0){
                soma += i;
                if(i != x / i) soma += x / i;
            }
        }
        if(soma == x) printf("%lld eh perfeito\n", x);
        else printf("%lld nao eh perfeito\n", x);
    }
    return 0;
}