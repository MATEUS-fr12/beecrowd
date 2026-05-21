///SEQUENCIAS CRESCENTES///
#include <stdio.h>
int main(){
    int X;
    while (scanf("%d", &X) == 1 && X != 0) {
        printf("1");
        for (int i = 2; i <= X; i++) {
            printf(" %d", i);
        }
        printf("\n");
    }
    return 0;
}

