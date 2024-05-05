#include<stdio.h>
int main()
{
    int row=3,col=3;
    int a[3][3];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=0;
    if(row != col)
    {
        flag=1;
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                continue;
            }
            else if(a[i][j]!=0)
            {
                flag=1;
            }
        }
    }
    if(flag == 0)
    {
        printf("Diagonal");
    }
    else
    {
        printf("Not Diagonal");
    }
    return 0;
}
