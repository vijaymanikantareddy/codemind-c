#include<stdio.h>
bool palin(int n){
    int temp=n, res=0;
    while(temp)
    {
        res = res*10 + temp%10;
        temp/=10;
    }
    return res==n;
}
int main()
{
    int n,d;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&d);
        palin(d)? printf("True
"):printf("False
");
    }
}