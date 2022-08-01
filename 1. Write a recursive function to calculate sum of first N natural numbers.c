// 1. Write a recursive function to calculate sum of first N natural numbers
#include <stdio.h>
int SumOfFirstN_Natural(int);
int main()
{
    int x;
    printf("enter a natural number = ");
    scanf("%d", &x);
    printf("Sum of First %d Numbers = %d ", x, SumOfFirstN_Natural(x));
    return 0;
}
int SumOfFirstN_Natural(int y)
{
    if (y >= 1)
    {
        return y + SumOfFirstN_Natural(y - 1);
    }
}