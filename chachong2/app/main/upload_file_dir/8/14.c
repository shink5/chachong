#include <stdio.h>
#include <stdlib.h>
#define PI1 3.141592
int main()
{
    printf("Number:190210508\nʵ��2.1\n");
    const double PI2=3.14;
    double r;
    printf("����뾶=");
    scanf("%lf",&r);
    printf("�����Ϊ��%lf\n",(4.0/3)*PI1*r*r*r);
    printf("�����Ϊ:%lf\n",4.0*PI1*r*r);

    return 0;
}
