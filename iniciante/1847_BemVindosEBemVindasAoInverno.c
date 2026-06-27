///BEM VINDOS E BEM VINDAS AO INVERNO
#include <stdio.h>
#include <stdlib.h> 
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a > b){
        if(c >= b){
            printf(":)\n");
        }else{
            if((b - c) < (a - b)){
                printf(":)\n");
            }else{
                printf(":(\n");
            }
        }
    }else if(a < b){
        if(c <= b){
            printf(":(\n");
        }else{
            if((c - b) < (b - a)){
                printf(":(\n");
            }else{
                printf(":)\n");
            }
        }
    }else{
        if(c > b){
            printf(":)\n");
        }else{
            printf(":(\n");
        }
    }
    return 0;
}