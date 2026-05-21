///SEQUENCIA LOGICA///
#include <stdio.h>
int main(){
    int N;
    if (scanf("%d", &N)!=1 ) return 0;
    for (int i = 1; i <= N; i++) {
        long long quadrado = (long long)i * i;
        long long cubo = (long long)i * i * i;
        printf("%d %lld %lld\n", i, quadrado, cubo);
        printf("%d %lld %lld\n", i, quadrado + 1, cubo + 1);
    }
    return 0;
}
