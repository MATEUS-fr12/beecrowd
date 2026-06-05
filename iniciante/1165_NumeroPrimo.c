///NUMERO PRIMO///
#include <stdio.h>
int main(){
    int n, x;
    if (scanf("%d", &n) != 1) return 1;
    for (int i = 0; i < n; i++){
        if(scanf("%d", &x) != 1) return 1;
        if(x <= 1) {
            printf("%d nao eh primo\n", x);
            continue;
        }
        int eh_primo = 1; 
        for(int j = 2; j * j <= x; j++){
            if(x % j == 0){
                eh_primo = 0; 
                break;            
            }
        }
        if(eh_primo) printf("%d eh primo\n", x);
        else printf("%d nao eh primo\n", x);
    }
    return 0;
}