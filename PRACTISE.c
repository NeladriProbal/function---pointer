#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++)
    {
        long long int a[4];
        for(int i=0;i<4;i++)
        {
            scanf("%lld",&a[i]);
        }
        for(int i=0;i<4-1;i++)
        {
            for(int k=i+1;k<4;k++)
            {
                long long int tmp=a[i];
                if(a[i]<a[k])
                {
                    a[i]=a[k];
                    a[k]=tmp;
                }
            }
        }
        int flag=0;
        for(int i=0;i<4;i++)
        {
            if(a[i]==0)
            {
                flag=1;
            }
        }
        if (flag==1)
        {
            printf("0");
            continue;
        }
        long long int ans;
        ans=a[0]/(a[1]*a[2]*a[3]);
        if(a[0]%(a[1]*a[2]*a[3]) == 0)
        {
            printf("%lld\n",ans);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
