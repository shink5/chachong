#include <stdio.h>
#include <stdlib.h>
#define PI1 3.14159

int main()
{
    printf("Number:190210506\nsubject NO.2-program NO.1\n\n");


    double r,V,S;/*�뾶������������*/
    const double PI2 = 3.14159;

    printf("��������İ뾶��");
    scanf("%lf",&r);

    V=4.0/3*PI1*r*r*r;
    S=4*PI2*r*r;

    printf("��������%7.3f,��ı������%7.3f��\n",V,S);/*Ϊ����������������,��������λС��*/

    getchar();
    getchar();

    return 0;
}
