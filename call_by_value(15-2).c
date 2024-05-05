#include<stdio.h>
void fun(int x)
{
    x=100;
    printf("%d",x);
}
int main()
{
    int x=20;
    printf("%d\n",x);
    fun(x);
    return 0;
}
