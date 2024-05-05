#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=5*n+1;i++)
    {
        for(int j=1;j<=5+(n-i);j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int j=2;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
