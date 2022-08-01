// 4. Write a recursive function to calculate sum of squares of first n natural numbers
#include <stdio.h>
int SumOfSquqre(int);
int SumOfSquqre(int n)
{
    if (n >= 1)
    {
        return n * n + SumOfSquqre(n - 1);
    }
}
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("Sum of Squqre of First %d Numbers =  %d", n, SumOfSquqre(n));
    return 0;
}