// 2. Write a recursive function to calculate sum of first N odd natural numbers
#include <stdio.h>
int SumOfFirstN_Odd_Natural(int);
int main()
{
    int x;
    printf("enter a natural number = ");
    scanf("%d", &x);
    printf("Sum of First %d Odd Numbers = %d ", x, SumOfFirstN_Odd_Natural(x * 2 - 1));
    return 0;
}
int SumOfFirstN_Odd_Natural(int y)
{
    if (y == 1)
        return 1;
    return y + SumOfFirstN_Odd_Natural(y - 2);
}