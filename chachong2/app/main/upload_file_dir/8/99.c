#include <stdio.h>
#include <stdlib.h>

int main()
{
    const double pi=3.1415;
    float a,b,c;
    printf("����뾶:");
    scanf("%f",&a);
    b=a*a*a*pi*4/3;
    c=4*pi*a*a;
    printf("������=%f\n",b);
    printf("��ı����=%f\n4",c);
    system("pause");
    return 0;
}
