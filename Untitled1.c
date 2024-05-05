#include<stdio.h>
int main()
{
    int e,m,b,count=0;
    scanf("%d %d %d",&e,&m,&b);
    if(e>1 && m>=0 && b>0)
    {
        if(e/2 <= b/1)
        {
            count+=e/2;
        }
        else if(e/2 > b/1)
        {
            count+=b/1;
        }
    }
    else if(e>0 && m>0 && b>0)
    {
        if(e < m && m < b)
        {
            count+=e;
        }
        else if(m < e && e < b)
        {
            count+=m;
        }
        else if(b < m && m < e)
        {
            count+=b;
        }
        else if(b < e && e < m)
        {
            count+=b;
        }
        else if(e < b && b < m)
        {
            count+=e;
        }
        else if(m < b && b < e)
        {
            count+=m;
        }

    }
    printf("%d",count);
    return 0;
}
