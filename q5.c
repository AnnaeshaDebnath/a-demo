#include <stdio.h>
void KSWAP()
 {
    int num1, num2, temp;
    printf("Enter num1: ");
    scanf("%d", &num1);
    printf("Enter num2: ");
    scanf("%d", &num2);
        printf("\nBefore Swapping\nnum1=%d\nnum2=%d\n", num1, num2);
        temp = num1;
    num1 = num2;
    num2 = temp;
        printf("\nAfter Swapping\nnum1=%d\nnum2=%d\n", num1, num2);
}
int main() 
{
    KSWAP();
    return 0;
}