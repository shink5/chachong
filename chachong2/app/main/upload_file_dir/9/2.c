#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float a,b,c;//���������ε������߳�
    float area;//�����ε����
    float p;//���׹�ʽ�е�p
    printf("Number:180210129\n");
    printf("Subject.2.program.2\n\n");
    printf("�����������ε������߳�a,b,c:");
    scanf("%f,%f,%f",&a,&b,&c);
    if(a+b>c && a+c>b && b+c>a)
    {
        p=(a+b+c)/2;
        area=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("��������ε�����ǣ�%f",area);
    }
    else
    {
        printf("�������޷�����һ��������");
    }
    return 0;
}
