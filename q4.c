void KPRIME() 
{    int n, i, count = 0;
    printf("Enter an integer: ");
scanf("%d", &n);
 for (i = 1; i <= n; i++) 
{
        if (n % i == 0) count++;
    }
        if (count == 2) printf("%d is prime.\n", n);
    else printf("%d is not prime.\n", n);
}
int main()
 {
    KPRIME();
return 0;}