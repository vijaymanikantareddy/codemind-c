#include<stdio.h>
bool fun(int n)
{
    int sum=1, temp=n;
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            if(i!=n/i){
                sum+=n/i;
            }
            sum+=i;
        }
    }
    return temp==sum;
}
int main()
{
    int a;
    scanf("%d",&a);
    if(fun(a))
        printf("True");
    else printf("False");
}