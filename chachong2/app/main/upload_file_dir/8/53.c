#include <stdio.h>
#define PI 3.1415926
int main()
{
    double r;
    printf("input r");
    scanf("%lf",&r);
    printf("�����=%f\n",4*PI*r*r);
    printf("���=%f\n",(4*PI*r*r*r)/3);
}
