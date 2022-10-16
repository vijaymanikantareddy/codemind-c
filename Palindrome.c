#include<stdio.h>
bool ispalin(int n)
{
    int temp=n, rev=0;
    while(n){
        rev = rev*10 + n%10;
        n/=10;
    }
    return temp==rev;
}
int main()
{
    int n;
    scanf("%d ", &n);
    ispalin(n)? printf("True"): printf("False");
}