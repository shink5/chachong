#include <stdio.h>
#include <stdlib.h>


int main()
{
    const double PI=3.1415926;
    double r,S,V;
    printf("���ã���ӭʹ�ñ����\n��������Ҫ�����İ뾶\n");
    scanf("%lf",&r);
    S=PI*r*r*r/4;
    V=PI*r*r*r*4/3;
    printf("S=%lf\n",S);
    printf("V=%lf\n",V);
    return 0;
}
