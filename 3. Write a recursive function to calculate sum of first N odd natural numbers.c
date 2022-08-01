// 3. Write a recursive function to calculate sum of first N Even natural numbers
#include <stdio.h>
int SumOfFirstN_Even_Natural(int);
int main()
{
    int x;
    printf("enter a natural number = ");
    scanf("%d", &x);
    printf("Sum of First %d Even Numbers = %d ", x, SumOfFirstN_Even_Natural(x * 2));
    return 0;
}
int SumOfFirstN_Even_Natural(int y)
{
    if (y >= 2)
    {
        return y + SumOfFirstN_Even_Natural(y - 2);
    }
}