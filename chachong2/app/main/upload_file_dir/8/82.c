#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double PI=3.1415926;
    double r,S,V;
    printf("������İ뾶");
    printf("r=");
    scanf("%lf",&r);
    S=4*PI*r*r;
    V=PI*r*r*r*4/3;
    printf("������Ϊ%f��������Ϊ%f",V,S);
}
