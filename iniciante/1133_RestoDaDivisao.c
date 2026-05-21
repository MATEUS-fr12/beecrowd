///RESTO DA DIVISAO///
#include<stdio.h>
int main(){
    int X, Y, aux;
    scanf("%d%d", &X,&Y);
    if (X > Y){
        for (aux = Y + 1 ; aux < X; aux = aux + 1){
            if (aux % 5 == 2 || aux % 5 == 3) printf("%d\n", aux);
        }
    }
    else if(X < Y){
            for (aux = X+1 ; aux < Y; aux = aux + 1){
                if (aux % 5 == 2 || aux % 5 == 3)printf("%d\n", aux);
            }
    }
    return 0;
}