#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main()
{
   float a,b,c;
    printf("����뾶:");
    scanf("%f",&a);
    b=a*a*a*PI*4/3;
    c=4*PI*a*a;
    printf("������=%f\n",b);
    printf("��ı����=%f\n",c);
    system("pause");
    return 0;
}
