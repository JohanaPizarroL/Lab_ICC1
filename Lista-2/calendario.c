/*Calendário*/
#include <stdio.h>

int main()
{
    int dia, hoje;
    scanf("%d", &hoje);
    printf("         Abril 2021             \n");
    
printf(" Do  Se  Te  Qu  Qu  Se  Sa \n");

    printf("                ");
    
    for(dia = 1; dia <= 9; dia++){
        if (dia == hoje){
            printf("( %d)", dia);
        }else{
            printf("  %d ", dia);
        }
        if(dia == 3 || dia == 10 || dia == 17 || dia == 24){
            printf("\n");
        }
    }
    
    for(dia = 10; dia <= 30; dia++){
        if (dia == hoje){
            printf("(%d)", dia);
        }else{
            printf(" %d ", dia);
        }
        if(dia == 3 || dia == 10 || dia == 17 || dia == 24){
            printf("\n");
        }
    }

    return 0;
}
