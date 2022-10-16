#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a, &b);
    for(int i=1 ; i<=b ; i+=2){
        printf("%d x %d = %d
", a, i, a*i);
    }
    
}