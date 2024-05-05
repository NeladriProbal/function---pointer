#include<stdio.h>
int main()
{
    double x=10.25;
    double*ptr=&x;
    double*ptr2=ptr;
    *ptr2=19.17;
    printf("%0.2lf %0.2lf %0.2lf",x,*ptr,*ptr2);
    return 0;
}
