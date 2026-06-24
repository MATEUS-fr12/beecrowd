///GRENAIS///
#include <stdio.h>
int main(){
    int inter, gremio, vi = 0, vg = 0, emp = 0, total = 0, op;
    while(1){
        scanf("%d %d", &inter, &gremio);
        total++;
        if (inter > gremio) vi++;
        else if (gremio > inter) vg++;
        else emp++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &op);
        if (op != 1) break; 
    }
    printf("%d grenais\n", total);
    printf("Inter:%d\n", vi);
    printf("Gremio:%d\n", vg);
    printf("Empates:%d\n", emp);
    if(vi > vg)printf("Inter venceu mais\n");
    else if(vg > vi) printf("Gremio venceu mais\n");
    else printf("Nao houve vencedor\n");
    return 0;
}