#include<stdio.h>
int sum(int x,int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
    int s=sum(100,200);
    printf("%d",s);
    return 0;
}
