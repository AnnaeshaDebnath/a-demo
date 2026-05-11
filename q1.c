#include <stdio.h>

int addNumbers(int a, int b)
 {
    return a + b;
}

int main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int sum = addNumbers(num1, num2);
    printf("Sum of %d and %d = %d\n", num1, num2, sum);
    
    return 0;
}

