// 10. Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>
long long int Power(long long int, long long int);
int main()
{
    long long int a, b;
    printf("enter a number = ");
    scanf("%d", &a);
    printf("enter power of this number = ");
    scanf("%d", &b);
    printf("%d^%d = %lld", a, b, Power(a, b));
    return 0;
}
long long int Power(long long int n, long long int p)
{
    if (p == 1)
        return n;
    return n * Power(n, p - 1);
}
