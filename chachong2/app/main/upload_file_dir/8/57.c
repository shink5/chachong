#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926
int main()
{
    float V,S,r;
    printf("��������İ뾶r:\n");
    scanf("%f",&r);
    V=4/3*PI*r*r*r;
    S=4*PI*r*r;
    printf("�����SΪ��%f\n",S);
    printf("�����V:%f\n",V);

    return 0;
}
