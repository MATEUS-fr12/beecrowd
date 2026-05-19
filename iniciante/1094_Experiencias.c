///EXPERIENCIAS///
#include <stdio.h>
int main(){
    int total,N,quanti, cont_c,cont_r,cont_s;
    char name;
    total = 0 , cont_c = 0 , cont_r = 0 , cont_s = 0;
    scanf("%d",&N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d%c",&quanti,&name);
        if (quanti >= 1  && quanti <=15){
            total = total + quanti;
            if (name == 'C' || name == 'c')
            {
                cont_c ++;
            }
            if (name == 'R' || name == 'r')
            {
                cont_r ++;
            }
            if (name == 'S' || name == 's')
            {
                cont_s ++;
            }
        }else{
            printf("numero menor do que 1 ou maior do que 15\n");
        }
    }
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",total,cont_c,cont_r,cont_s,((100*cont_c)/total),((100*cont_r)/total),((100*cont_s)/total));
    return 0;
}