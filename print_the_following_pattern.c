#include<stdio.h>
int main()
{
    int n;
    scanf("%d ",&n);
    int beg=1, end=n, st=1;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n ; j++)
        {
            if(j==beg || j==end){
                printf("x");
            }
            else{
                printf("0");
            }
        }
        if(st<n/2+1){
            beg++;
            end--;
        }
        else{
            beg--;
            end++;
        }
        printf("
");
    }
}
