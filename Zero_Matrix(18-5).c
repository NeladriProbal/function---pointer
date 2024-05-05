#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int tmp=n;
    if(n==1)
    {
        n=6;
    }
    else if(n==3)
    {
        n=7;
    }
    else if(n==5)
    {
        n=8;
    }
    else if(n==7)
    {
        n=9;
    }
    else if(n==9)
    {
        n=10;
    }
    else if(n==11)
    {
        n=11;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
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
    for(int i=1;i<=5;i++)
    {
        for(int i=1;i<=5;i++)
        {
            printf(" ");
        }
        for(int j=0;j<tmp;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
