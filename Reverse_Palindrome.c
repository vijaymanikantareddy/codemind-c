#include<stdio.h>
int rev(int n)
{
    int temp = n, rev = 0;
    while(n)
    {
        rev = rev * 10 + (n%10);
        n /= 10;
    }
    return rev;
}
int main()
{
    int n;
    scanf("%d", &n);
    bool se = true;
    n += rev(n);
    while(rev(n) != n)
    {
        n += rev(n);
    }
    printf("%d",n);
}