#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{
    const double pi = 3.14159;
    double r;
    printf("������r:");
    scanf("%lf",&r);
    printf("�궨����� = %lf\n",4*PI*r*r);
    printf("const��� = %lf\n",4*pi*r*r);
    printf("�궨����� = %lf\n",4/3*PI*r*r*r);
    printf("const��� = %lf\n",4/3*pi*r*r*r);
    return 0;
}
