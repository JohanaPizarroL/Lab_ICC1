#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, potencia;
/*    printf("Digite dois números: \n"); o codigo fica feio assim :(*/
    scanf("%f\n%f", &a, &b);

    potencia = pow(a, b);
//    printf("O número 'a' elevado a potencia de 'b' é: %.4f", potencia);
    printf("%.4f", potencia);
    return 0;
}
