#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    const double Pi=3.14159;
    double r;
    printf("������뾶:");
    scanf("%lf",&r);
    printf("������=%f,��ı����=%f\n",4/3*Pi*r*r*r,4*Pi*r*r);
}
