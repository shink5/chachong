#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Number : 190210518");
    printf("subject No.1 - program No.1\n\n");
    float a, b, c, p;
    printf("�û����ã������������ε������� a,b,c:");
    scanf("%f,%f,%f", &a, &b, &c);
    p = (a + b + c)/2;
    if(a+b>c && a+c>b && b+c>a)
    {
        printf("��ϲ����������������߿��Թ���������");
        printf("�������ε����Ϊ = %f\n", sqrt(p*(p-a)*(p-b)*(p-c)));
    }
    else
        printf("�Բ���������������߲��ܹ���������");
}
