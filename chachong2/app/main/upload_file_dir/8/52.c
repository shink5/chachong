#include <stdio.h>
int main()
{
    const double PI=3.14159;
    double r;
    printf("input r:");
    scanf("%lf",&r);
    printf("�����=%f\n",4*PI*r*r);
    printf("���=%f\n",(4*PI*r*r*r)/3);
}
