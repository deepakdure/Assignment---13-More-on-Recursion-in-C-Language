// 5. Write a recursive function to calculate sum of digits of a given number
#include <stdio.h>
int Sum_of_Digits(int);
int Sum_of_Digits(int a)
{
    if (a == 0)
        return 0;
    return a % 10 + Sum_of_Digits(a / 10);
}
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("Sum of All Digits is = %d", Sum_of_Digits(n));
    return 0;
}
