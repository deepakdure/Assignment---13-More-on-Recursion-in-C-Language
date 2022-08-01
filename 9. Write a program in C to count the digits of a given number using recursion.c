// 9. Write a program in C to count the digits of a given number using recursion.
#include <stdio.h>
int CountDigits(int);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("Total Digits in This Given Number is = %d", CountDigits(n));
}
int x = 0;
int CountDigits(int a)
{
    if (a == 0)
        return 0;
    x++ + CountDigits(a / 10);
    return x;
}