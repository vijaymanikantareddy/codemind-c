#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)    printf("0");
    else
        if(n==9)
            printf("9");
        else
            printf("%d",n%9);
}