#include <stdio.h>

int main(){
    
    
	unsigned char tam1 = sizeof(unsigned char);
//	printf("O tamanho de 'unsigned char' é: %d\n", tam1);
    printf("%d\n", tam1);
    
    char tam2 = sizeof(char);
//	printf("O tamanho de 'char' é: %d\n", tam2);
	printf("%d\n", tam2);

    unsigned int tam3 = sizeof(unsigned int);
//	printf("O tamanho de 'unsigned int' é: %d\n", tam3);
    printf("%d\n", tam3);

    short int tam4 = sizeof(short int);
//	printf("O tamanho de 'short int' é: %d\n", tam4);
    printf("%d\n", tam4);

    int tam5 = sizeof(int);
//	printf("O tamanho de 'int' é: %d\n", tam5);
	printf("%d\n", tam5);
	
    long int tam6 = sizeof(long int);
//	printf("O tamanho de 'long int' é: %ld\n", tam6);
    printf("%ld\n", tam6);
	
	unsigned long int tam7 = sizeof(unsigned long int);
//	printf("O tamanho de 'unsigned long' é: %ld\n", tam7);
    printf("%ld\n", tam7);

	
	long long int tam8 = sizeof(long long int);
//	printf("O tamanho de ' long long int' é: %lld\n", tam8);
	printf("%lld\n", tam8);

    long int tam9 = sizeof(float);
//	printf("O tamanho de 'float' é: %f\n", tam9);
	printf("%ld\n", tam9);

	
	long int tam10 = sizeof(double);
//	printf("O tamanho de 'double' é: %f\n", tam10);
	printf("%ld\n", tam10);

    long int tam11 = sizeof(long double);
//	printf("O tamanho de 'long double' é: %Lf\n", tam11);
 	printf("%ld\n", tam11);

/*O operador 'sizeof' nos permite saber a quantidade de memoria em bytes 
que cada tipo devariavel usa ou suporta.
Pode ser usado o formatador proprio de cada tipo ou usar %d(do tipo int).
Eu declarei como 'int' alguns já que somente sao cariaveis que guardam
um valor que é o tipo do sizeof
e usei o formatador %d, porque estava dando erro :( */
	
    
	return 0;
}
