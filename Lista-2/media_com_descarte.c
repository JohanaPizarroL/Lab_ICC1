/*Media com descarte*/
#include <stdio.h>

int main(){
    
    double a, b, c, d, media;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

/*Verificando o numero menor, "excluir" ele e logo calcular a media aritmetica com as outras notas.*/
/*Verificando se numeros sao positivos*/
    if(a >= 0 && b >= 0 && d >= 0 && d >= 0){
        
/*Menor numero "a"*/
        if(b >= a && c >= a && d >= a){
            media = (b + c + d) / 3;
            printf("%.4lf\n", media);
        }  
/*Menor numero "b"*/
        else if(a >= b && c >= b && d >= b){
            media = (a + c + d) / 3;
            printf("%.4lf\n", media);
        }  
/*Menor numero "c"*/
        else if(a >= c && b >= c && d >= c){
            media = (a + b + d) / 3;
            printf("%.4lf\n", media);
        }   
/*Menor numero "d"*/
        else if (a >= d && b >= d && c >= d){
            media = (a + b + c) / 3;
            printf("%.4lf\n", media);
        }
    }
    
    return 0;
}