///SEQUENCIA S II///
#include <stdio.h>
int main(){
    double S = 0.0;
    double n = 1.0;
    double d = 1.0;
    while (n <= 39.0){
        S += n / d;
        n += 2.0;
        d *= 2.0;
    }
    printf("%.2f\n", S);
    return 0;
}