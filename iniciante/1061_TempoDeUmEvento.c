///TEMPO DE UM EVENTO///
#include <stdio.h>
int main(){
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;
    char desc1[5], desc2[5];
    scanf("%s %d", desc1, &d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%s %d", desc2, &d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);
    int its = (d1 * 24 * 60 * 60) + (h1 * 60 * 60) + (m1 * 60) + s1;
    int fts = (d2 * 24 * 60 * 60) + (h2 * 60 * 60) + (m2 * 60) + s2;
    int ds = fts - its;
    if (ds < 0){
        ds += 24 * 60 * 60;
        d1--;
    }
    int d = ds / (24 * 60 * 60);
    ds %= (24 * 60 * 60);
    int h = ds / (60 * 60);
    ds %= (60 * 60);
    int m = ds / 60;
    ds %= 60;
    int s = ds;
    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
    return 0;
}
