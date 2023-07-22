/*Linha de Metrô*/

#include <stdio.h>

int main()
{
    int numero;
/*   printf("Morumbi (0)\nButanta (1)\nPinheiros (2)\nFaria Lima (3)\nFradique Coutinho (4)\nOscar Freire (5)\nPaulista (6)\nHigienopolis-Mackenzie (7)\nRepublica (8)\nLuz (9)\n"); 
   printf("Digite o número da estação: ");*/
    scanf("%d", &numero);
/*Verificando se o numero é positivo e está dentro do intervalo de 0 a 9*/
    if(numero >= 0 && numero <=9){
        switch(numero){
            case 0:
                printf("* Morumbi\n|\n* Butanta\n|\n* Pinheiros\n|\n* Faria Lima\n|\n* Fradique Coutinho\n|\n* Oscar Freire\n"); 
                break;
            case 1:
                printf("* Butanta\n|\n* Pinheiros\n|\n* Faria Lima\n|\n* Fradique Coutinho\n|\n* Oscar Freire\n"); 
                break;
            case 2:
                printf("* Pinheiros\n|\n* Faria Lima\n|\n* Fradique Coutinho\n|\n* Oscar Freire\n"); 
                break;
            case 3:
                printf("* Faria Lima\n|\n* Fradique Coutinho\n|\n* Oscar Freire\n"); 
                break;
            case 4:
                printf("* Fradique Coutinho\n|\n* Oscar Freire\n"); 
                break;
            case 5:
                printf("* Oscar Freire\n"); 
                break;
            case 6:
                printf("* Paulista\n|\n* Higienopolis-Mackenzie\n|\n* Republica\n|\n* Luz\n"); 
                break;
            case 7:
                printf("* Higienopolis-Mackenzie\n|\n* Republica\n|\n* Luz\n"); 
                break;
            case 8:
                printf("* Republica\n|\n* Luz\n"); 
                break;
            case 9:
                printf("* Luz\n"); 
            break;
        }
    }
    
    return 0;
}
