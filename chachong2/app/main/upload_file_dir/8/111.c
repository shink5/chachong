#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415926535
int main()
{
    const double Pi=3.1415926;
    double r;
    printf("������뾶r:");
    scanf("%lf",&r);
    printf("������(�궨���PI��=%f\n",4*PI*r*r*r/3);
    printf("��ı����(�궨���PI��=%f\n",4*PI*r*r);
    printf("������(const�����Pi��=%f\n",4*Pi*r*r*r/3);
    printf("��ı����(const�����Pi��=%f\n",4*Pi*r*r);
    return 0;
}
