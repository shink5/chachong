#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define Pi 3.14159
int main()
{
    double r;
    printf("������뾶:");
    scanf("%lf",&r);
    printf("������=%f,��ı����=%f\n",4/3*Pi*r*r*r,4*Pi*r*r);
}
