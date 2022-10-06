
#include<stdio.h>
int main()
{
    int n;
    scanf("%d ",&n);
        int sp=n-1, rw=1;
        for(int i=1 ; i<=n ; i++){
            for(int j=0 ; j<sp ; j++){
                printf(" ");
            }
            for(int j=0 ; j<rw ; j++){
                printf("%d",i);
            }
            if(i<n)
                printf("
");
            sp--;
            rw+=2;
        }
}
