#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   float a,b,c,p,square;
    printf("Number: 190210628\n");
    printf("subject No.2 - program No.1\n\n");
    printf("�����������ε���������a b c:\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("�������߿��Թ���һ��������\n");
        p=(a+b+c)/2;
        square=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("��������ε����Ϊ%f",square);
    }
    else
        printf("�������߲����Թ���һ��������");
        return 0;
}
