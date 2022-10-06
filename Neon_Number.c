#include<stdio.h>
int sod(int n){
    int res=0;
    while(n){
        res += n%10;
        n/=10;
    }
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    (n==sod(n*n))? printf("Neon Number"): printf("Not Neon Number");
}