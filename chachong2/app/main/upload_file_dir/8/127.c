#include <stdio.h>
#include <stdlib.h>

main()
{
    const double PI =3.14159;

    float r,s,v;
    printf("��������İ뾶:\n");
    scanf("%f",&r);
    s=4*PI*r*r;
    v=(4*PI*r*r*r)/3;
    printf("��ı����Ϊ:%f\n",s);
    printf("������Ϊ:%f\n",v);
    return 0;
}
