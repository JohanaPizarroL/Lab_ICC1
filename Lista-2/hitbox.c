/*HitBox*/
#include <stdio.h>

int main(){
/*x = largura , y = altura*/
    long int x1, y1, w1, h1, x2, y2, w2, h2, x, y, w, h;
    
/*Leitura dos retangulos*/

    scanf("%ld %ld %ld %ld\n", &x1, &y1, &w1, &h1);
    scanf("%ld %ld %ld %ld\n", &x2, &y2, &w2, &h2);

/*Comparando*/
    if(x1 > x2){
        x = x1;
        x1 = x2;
        x2 = x;
        /*Trocando se for o caso*/
        w = w1;
        w1 = w2; 
        w2 = w;
    }
    if (y1 > y2){
        y = y1;
        y1 = y2;
        y2 = y;
        /*Trocando se for o caso*/
        h = h1; 
        h1=h2;
        h2= h;
    }

    if(x1 + w1 >= x2 && y1 + h1 >= y2){
        
        if(x1 < x2){
            x = x2;
        }else{
            x = x1;
        }
        
        if(y1 < y2){
            y = y2;
        }else{
            y = y1;
        }
        
        if(x1 + w1 < x2 + w2){
            w = x1 + w1 - x ;
        }else{
            w = x2 + w2 - x;
        }
        
        if(y1 + h1 < y2 + h2){
            h = y1 + h1 - y;
        }else{
            h = y2 + h2 - y;
        }
        
        printf("HIT: %ld %ld %ld %ld\n", x, y, w, h);
        
    }else{
        printf("MISS");
    }

return 0;
}