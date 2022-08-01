// 7. Write a recursive function to calculate HCF of two numbers
#include <stdio.h>
int HCF(int, int);
int main()
{
    int n, m;
    printf("enter two number = ");
    scanf("%d%d", &n, &m);
    HCF(n, m);
    printf("HCF is = %d", HCF(n, m));
    return 0;
}
int HCF(int a, int b)
{
    if (b == 0)
        return a;
    return HCF(b, a % b);
}
