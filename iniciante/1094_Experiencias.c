///EXPERIENCIAS///
#include <stdio.h>
int main(){
    int total = 0, N, quanti, cont_c = 0, cont_r = 0, cont_s = 0;
    char name;
    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d %c", &quanti, &name);
        if (quanti >= 1 && quanti <= 15){
            total = total + quanti;
            if(name == 'C' || name == 'c'){
                cont_c += quanti;
            }
            if(name == 'R' || name == 'r'){
                cont_r += quanti;
            }
            if(name == 'S' || name == 's'){
                cont_s += quanti;
            }
        }else{
            printf("numero menor do que 1 ou maior do que 15\n");
        }
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", cont_c);
    printf("Total de ratos: %d\n", cont_r);
    printf("Total de sapos: %d\n", cont_s);
    printf("Percentual de coelhos: %.2f %%\n", ((100.0 * cont_c) / total));
    printf("Percentual de ratos: %.2f %%\n", ((100.0 * cont_r) / total));
    printf("Percentual de sapos: %.2f %%\n", ((100.0 * cont_s) / total));
    return 0;
}