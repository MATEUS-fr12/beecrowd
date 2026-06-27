///BAZINGA!
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() 
{
    int i,x, aux = 0;
    char y1[10], y2[10];

    scanf("%d", &x);

    for ( i = 0; i < x; i++)
    {
        aux++;
        scanf("%s %s", y1, y2);
        
        if (strcmp(y1, y2) == 0)
        {
            printf("Caso #%d: De novo!\n", aux);
        }
        else
        {
            if (strcmp(y1, "Spock") == 0 && strcmp(y2, "pedra") == 0)
            {
                printf("Caso #%d: Bazinga!\n", aux);
            }
            else
            {
                if (strcmp(y1, "lagarto") == 0 && strcmp(y2, "Spock") == 0)
                {
                    printf("Caso #%d: Bazinga!\n", aux);
                }
                else
                {
                    if (strcmp(y1, "tesoura") == 0 && strcmp(y2, "lagarto") == 0)
                    {
                        printf("Caso #%d: Bazinga!\n", aux);
                    }
                    else
                    {
                        if (strcmp(y1, "papel") == 0 && strcmp(y2, "Spock") == 0)
                        {
                            printf("Caso #%d: Bazinga!\n", aux);
                        }
                        else
                        {
                            if (strcmp(y1, "tesoura") == 0 && strcmp(y2, "papel") == 0)
                            {
                                printf("Caso #%d: Bazinga!\n", aux);
                            }
                            else
                            {
                                if (strcmp(y1, "papel") == 0 && strcmp(y2, "pedra") == 0)
                                {
                                    printf("Caso #%d: Bazinga!\n", aux);
                                }
                                else
                                {
                                    if (strcmp(y1, "lagarto") == 0 && strcmp(y2, "papel") == 0)
                                    {
                                        printf("Caso #%d: Bazinga!\n", aux);
                                    }
                                    else
                                    {
                                        if (strcmp(y1, "pedra") == 0 && strcmp(y2, "lagarto") == 0)
                                        {
                                            printf("Caso #%d: Bazinga!\n", aux);
                                        }
                                        else
                                        {
                                            if (strcmp(y1, "Spock") == 0 && strcmp(y2, "tesoura") == 0)
                                            {
                                                printf("Caso #%d: Bazinga!\n", aux);
                                            }
                                            else
                                            {
                                                if (strcmp(y1, "pedra") == 0 && strcmp(y2, "tesoura") == 0)
                                                {
                                                    printf("Caso #%d: Bazinga!\n", aux);
                                                }
                                                else
                                                {
                                                    printf("Caso #%d: Raj trapaceou!\n", aux);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}
