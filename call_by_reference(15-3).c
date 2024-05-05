#include<stdio.h>
int fun(int*p)
{
    *p=100;
}
int main()
{
    int x=200;
    fun(&x);
    printf("%d",x);
    return 0;
}
