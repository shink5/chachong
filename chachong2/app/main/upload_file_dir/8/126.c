#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159

main()
{
    float r,s,v;
    printf("��������İ뾶:\n");
    scanf("%f",&r);
    s=4*PI*r*r;
    v=(4*PI*r*r*r)/3;
    printf("��ı����Ϊ:%f\n",s);
    printf("������Ϊ:%f\n",v);
    return 0;
}
