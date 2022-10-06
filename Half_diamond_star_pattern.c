#include<stdio.h>
int main()
{
    int n, last;
    scanf("%d ",&n);
    last = n-1;
    if(n<3 || n>100){
        printf("The pattern is not possible");
    }
    else{
            for(int i=1 ; i<n*2 ; i++)
            {
                if(i<=n)
                {
                    for(int j=1 ; j<=i ; j++)
                    {
                        printf("*");
                    }
                }
                else{
                    for(int j=1 ; j<=last ; j++)
                    {
                        printf("*");
                    }
                    last--;
                }
                printf("
");
            }
    }
}