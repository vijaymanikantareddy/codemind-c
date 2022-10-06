#include<stdio.h>
bool prime(int n)
{
    if(n==0 || n==1)
        return false;
    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    for(int i=a ; i<=b ; i++){
        if(prime(i)){
            printf("%d
",i);
        }
    }
}