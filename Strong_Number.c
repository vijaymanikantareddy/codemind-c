#include<stdio.h>
int fact(int n){
    int res=1;
    for(int i=2 ; i<=n ; i++){
        res*=i;
    }
    return res;
}
int main()
{
    int n;
    scanf("%d",&n);
    int temp=n, res=0;
    while(temp){
        int d = temp%10;
        res += fact(d);
        temp/=10;
    }
    (n==res)? printf("The number %d is a strong number",n): printf("The number %d is not a strong number",n);
}