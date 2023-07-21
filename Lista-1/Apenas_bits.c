#include <stdio.h>

int main()
{
    int num, result1, result2, result3, result4;
    
    scanf("%d", &num);
    
    result1 = num & 255;
    num = num >> 8;
    
    result2 = num & 255;
    num = num >> 8;

    result3 = num & 255;
    num = num >> 8;
/*com >> anda 8 casinhas */
    result4 = num & 255;
    num = num >> 8;
    
    printf("%c%c%c%c", result4, result3, result2, result1);

    return 0;
}
