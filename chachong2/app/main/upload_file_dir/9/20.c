#include <stdio.h>
#include<math.h>
int main()
{
   printf("Number:190210511\nsubject No.2-program No.2\n");
   double a,b,c,S,p;
   start:printf("�����������ε�һ���ߵ�ֵ��");
   scanf("%lf",&a);
   printf("�����������εڶ����ߵ�ֵ��");
   scanf("%lf",&b);
   printf("�����������ε������ߵ�ֵ��");
   scanf("%lf",&c);
   if(a+b>c&&b+c>a&&a+c>b)
   {
       p=(a+b+c)/2;
       S=sqrt(p*(p-a)*(p-b)*(p-c));
       printf("�����ε�����ǣ�%lf",S);
   }
   else
   {
       printf("a��b��c�������޷����������Σ����������롣\n");
       goto start;
   }
}
