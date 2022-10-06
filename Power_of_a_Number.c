#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    int d = pow(a,b);
    printf("%d", d%c);
}