#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926
int main()
{
    float r,S,V;
    printf("������İ뾶r=");
    scanf("%f",&r);
    S=4*PI*r*r;
    V=PI*r*r*r*4/3;
    printf("������Ϊ%f����ı����Ϊ%f\n",V,S);

}
