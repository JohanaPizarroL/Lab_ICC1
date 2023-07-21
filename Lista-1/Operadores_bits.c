#include <stdio.h>

int main()
{
    int a, b; 
    scanf("%d\n%d", &a, &b);
    
    int r_and = a & b;
    int r_or = a | b;
    int r_exor = a ^ b;
    int com_a = ~ a;
    int com_b = ~ b;
    int r_s = a >> 2;
    int l_s = b << 2;
    
    printf("%d\n", r_and);
    printf("%d\n", r_or);
    printf("%d\n", r_exor);
    printf("%d\n", com_a);
    printf("%d\n", com_b);
    printf("%d\n", r_s);
    printf("%d\n", l_s);


    return 0;
}
