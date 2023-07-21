#include <stdio.h>

int main()
{
    int ano;
    
/*    printf("Digite um ano: ");*/
    scanf("%d", &ano);
 
/*Ano bissexto, divisivel por 4*/

    if(ano % 4 == 0){
        
        printf("SIM\n");
    }else{
        printf("NAO\n");
    }
    return 0;
}
