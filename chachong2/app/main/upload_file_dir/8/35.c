#include <stdio.h>
#include <stdlib.h>
#define pi 3.14159

int main()
{
    const double pi2=3.14159;
    double r,a,b;
    printf("������뾶r:");
    scanf("%lf",&r);
    a=4*pi*r*r;
    b=(4.0/3.0)*pi2*r*r*r;
    printf("������:%f\n",a);
    printf("�����:%f\n",b);
    return 0;
}
