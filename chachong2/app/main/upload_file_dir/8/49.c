#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double a,b,c,d,e,f,g;
    printf("������a=");
    scanf("%lf",&a);
    printf("������b =");
    scanf("%lf",&b);
    printf("������c =");
    scanf("%lf",&c);
    if(a>b)
    {
        if(a>c)
        {
            d=a;
        }
        else
        {
            d=c;
        }
    }
    else
        {
            if(b>c)
            {
                d=b;
            }
            else
            {
                d=c;
            }
        }
    if(a+b+c-d<=d)
    {
        printf("����������");
    }
    else
    {
        f=(a+b+c)/2;
        g=f*(f-a)*(f-b)*(f-c);
        e=sqrt(g);
        printf("S=%lf",e);
    }
    return 0;
}
