#include<stdio.h>
int main()
{
    int n;
    scanf("%d ",&n);
    for(int i=1 ; i<=n ; i++)
        {
            for(int j=1 ; j<=n ; j++){
                if(j==1){
                    printf("* ");
                }
                else if(j==n){
                    printf("* ");
                }
                else if(i==j){
                    printf("* ");
                }
                else 
                    printf("  ");
            }
            printf("
");
        }
}