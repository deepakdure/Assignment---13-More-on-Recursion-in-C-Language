// 8. Write a recursive function to print first N terms of Fibonacci series
#include <stdio.h>
int Fibonacci(int);
int main()
{
    int n, i;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("First %d terms of Fibonacci series are = ", n);
    for (i = 1; i <= n; i++)
        printf("%d ", Fibonacci(i));
    return 0;
}
int Fibonacci(int x)
{
    if (x == 0 || x == 1)
        return x;
    return Fibonacci(x - 1) + Fibonacci(x - 2);
}