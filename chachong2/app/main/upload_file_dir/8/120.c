#include <stdio.h>
#define PI 3.14159
int main()
{
    printf("Number:190210603\n");
   printf("suject NO.2- program NO.1\n");
    const double pi = 3.14159;
    double r;
    printf("���� r��");
    scanf("%lf",&r);
    printf("�궨�����=%f\n",PI*r*r*r*4/3);
    printf("�궨������=%f\n",PI*r*r*4);
    printf("CONST�������=%f\n",pi*r*r*r*4/3);
    printf("CONST��������=%f\n",pi*r*r*4);
    return 0;
}
