///CRESCIMENTO POPULACIONAL///
#include <stdio.h>
int main(){
    int T,anos,PA, PB;
    double G1, G2;
    if (scanf("%d", &T) != 1) return 0;
    while(T--){
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        anos = 0;
        while (PA <= PB && anos <= 100) {
            PA += (int)(PA * (G1 / 100.0));
            PB += (int)(PB * (G2 / 100.0));
            anos++;
        }
        if(anos > 100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", anos);
    }
    return 0;
}