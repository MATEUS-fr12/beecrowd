///TEMPO DE JOGO COM MINUTOS///
#include <stdio.h>
int main(){
    int h1,h2,m1,m2,tmp;
    scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
    tmp = ((h2 * 60) + m2) - ((h1 * 60) + m1);
    if (tmp <= 0){
        tmp += 1440;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tmp / 60, tmp % 60);
    }
    return 0;
}
