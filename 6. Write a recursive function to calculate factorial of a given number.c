// 6. Write a recursive function to calculate factorial of a given number
#include <stdio.h>
int Factorial(int);
int Factorial(int a)
{
    int x;
    if (a == 1)
        return 1;
    return a * Factorial(a - 1);
}
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("Factorial of %d is = %d", n, Factorial(n));
    return 0;
}
