#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{

    float a,b;
    scanf("%f %f",&a,&b);
    int ans=floor(a);
    int ans=ceil(a);
    int ans=round(a);
    int ans=sqrt(a);
    int ans=pow(a,b);
    int ans=abs(a);
    printf("%f",ans);
    return 0;
}
