#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    float p,S;
    printf("���������ε����߳��ȣ�a,b,c\n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    if (a+b>c&&b+c>a&&a+c>b)
       {
         p=(a+b+c)/2;
         S=sqrt(p*(p-a)*(p-b)*(p-c));
         printf("�����ε����Ϊ%f",S);
       }
    else {
            printf("��������β�����");
    }
}
