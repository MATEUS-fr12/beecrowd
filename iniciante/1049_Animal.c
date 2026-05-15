///ANIMAL///
#include <stdio.h>
#include <string.h>
int main(){
    char g1[20], g2[20], g3[20];
    scanf("%s %s %s", g1, g2, g3);
    if (strcmp(g1, "vertebrado") == 0){
        if (strcmp(g2, "ave") == 0){
            if (strcmp(g3, "carnivoro") == 0){
                printf("aguia\n");
            }else{
                printf("pomba\n");
            }
        }else{
            if (strcmp(g3, "onivoro") == 0){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }else{
        if(strcmp(g2, "inseto") == 0){
            if (strcmp(g3, "hematofago") == 0){
                printf("pulga\n");
            }else{
                printf("lagarta\n");
            }
        }else{
            if (strcmp(g3, "hematofago") == 0){
                printf("sanguessuga\n");
            }else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
